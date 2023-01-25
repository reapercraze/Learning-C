#include <stdio.h>
#define N 10

void selection_sort(int n, int a[]);

int main()
{
	int a[N];

	printf("Enter any ten integers:\n");
	for (int i = 0; i < N; i++)
	{
		printf("Enter integer %d: ", i + 1);
		scanf_s("%d", &(a[i]));
	}

	selection_sort(N, a);

	printf("\n\nSorted numbers: ");

	for (int i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

void selection_sort(int n, int a[])
{
	int max = 0, maxidx = 0;

	if (n == 0)
	{
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxidx = i;
		}
	}
	
	int temp = a[n - 1];
	a[n - 1] = max;
	a[maxidx] = temp;

	selection_sort(n - 1, a);
}