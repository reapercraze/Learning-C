#include <stdio.h>

int main(void)
{
	int numerator1, numerator2, numerator3, denominator1, denominator2, denominator3;
	
	printf("Enter fraction 1: ");
	scanf("%d/%d", &numerator1, &denominator1);
	
	printf("Enter fraction 2: ");
	scanf("%d/%d", &numerator2, &denominator2);
	
	denominator3 = denominator1 * denominator2;
	numerator3 = (numerator1 * denominator2) + (numerator2 * denominator1);
	printf("Sum = %d/%d\n", numerator3, denominator3);
	return 0;
}