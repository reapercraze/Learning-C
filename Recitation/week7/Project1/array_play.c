#include <stdio.h>

#define N 5
int main()
{
	int a[5] = {0};
	int sum = 0, prod = 1, i = 0;

	for (i = 0; i < N; i++)
	{
		printf("Enter integer %d: ", i + 1);
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < N; i++)
	{
		sum += a[i];
		prod *= a[i];
	}

	printf("Sum = %d \nProduct = %d", sum, prod);

	return 0;
}