#include <stdio.h>

void math(int* a, int* b, int* sum, int* difference, int* product, 
	float* quotient);

int main()
{
	int x, y, sum, diff, prod;
	float quotient;

	printf("Enter 2 integers: ");
	scanf_s("%d%d", &x, &y);

	math(&x, &y, &sum, &diff, &prod, &quotient);

	printf("Sum: %d\nDifference: %d\nProduct: %d\n", sum, diff, prod);
	printf("Quotient: %f", quotient);

	return 0;
}


void math(int *a, int *b, int *sum, int *difference, int *product, 
	float *quotient)
{
	*sum = *a + *b;

	*difference = *a - *b;

	*product = *a * *b;

	*quotient = (float) * a / (float) *b;

	return;
}