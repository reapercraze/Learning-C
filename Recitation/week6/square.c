#include <stdio.h>

int main()
{
	int i, n;
	char ch;
	
	printf("This program prints a table of squares. \n");
	printf("Enter the number of entries that you want in the table: ");
	scanf("%d", &n);
	getchar();
	
	for (i = 1; i <= n; i++)
	{
		printf("%d\t%d\n", i, i*i);
		
		if ((i % 24) == 0)
		{
			printf("Press Enter to continue...");
			getchar();
		}
	
	}
	
	return 0;
}