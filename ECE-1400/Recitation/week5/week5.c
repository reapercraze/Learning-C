#include <stdio.h>

int main()
{
	int num, large;
	
	large = 0;
	printf("Enter any amount of numbers and I will find the largest.\n");
	do{
		printf("Enter any number--Enter 0 or below to END: ");
		scanf("%d", &num);
		
		if (num > large)
		{
			large = num;
		}
	}while (num > 0);
	
	printf("The largest number is: %d", large);
	
	
	return 0;
}