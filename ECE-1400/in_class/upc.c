#include <stdio.h>

int main ()
{
	int d, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5;
	int first_sum, sencond_sum, product, rem, ans;
	
	printf("Enter first digit: ");
	scanf("%d", &d);
	printf("Enter first set of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);
	printf("Enter second set of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);
	
	first_sum = d + f2 + f4 + s1 + s3 + s5;
	sencond_sum = f1 + f3 + f5 + s2 + s4;
	product = ((first_sum * 3) + sencond_sum) - 1;
	rem = product % 10;
	ans = 9 - rem;
	
	printf("The checksum should be: %d", ans);
	return 0;
}