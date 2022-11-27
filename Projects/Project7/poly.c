/*************************************************
* Function Title: Main
*
* Summary: 
*
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*   Calculate each term
*	Print
* End
*************************************************/

double term(double num);

#include <stdio.h>

int main() //Begin
{
	double x, result;

	printf("This program calculates the following polynomial:\n");
	printf("2x^5 + 3x^4 - x^3 - 5x^2 + 6x - 7\n");
	printf("Please enter a value for x: ");
	scanf_s("%lf", &x);

	//Calculate each term
	result = term(x);
	
	printf("Result: %.8lf\n", result); //Print

	unsigned int j, n, d, s;

	printf("Enter a number: ");
	scanf_s("%u", &n);

	for (j = 1, d = 3, s = 1; j <= n; ++j) {
		printf("%5u%5u\n", j, s);
		s += d;
		d += 2;
	}


	return 0; //End
}

/*************************************************
* Function Title: term
*
* Summary: calculate the result of a term
*
* Inputs: num, expon, constant
* Outputs: result
*
**************************************************
* Pseudocode
*
* Begin
*	Loop
*		Calculate exponet
*	Calculate constant
*	Loop
*		Calculate exponet
*	Calculate constant
*	Loop
*		Calculate exponet
*	Calculate constant
*	Loop
*		Calculate exponet
*	Calculate constant
* 	Loop
*		Calculate exponet
*	Calculate constant
*	Calculate result
* End
*************************************************/

double term(double num) //Begin
{
	double result, t1 = 1, t2 = 1, t3 = 1, t4 = 1, t5 = 1;

	for (int i = 0; i < 1; i++) //Loop
	{
		t1 = t1 * num; //Calculate exponet
	}
	t1 *= 6; //Calculate constant

	for (int i = 0; i < 2; i++) //Loop
	{
		t2 = t2 * num; //Calculate exponet
	}
	t2 *= -5; //Calculate constant
	for (int i = 0; i < 3; i++) //Loop
	{
		t3 = t3 * num; //Calculate exponet
	}
	t3 *= -1; //Calculate constant
	for (int i = 0; i < 4; i++) //Loop
	{
		t4 = t4 * num; //Calculate exponet
	}
	t4 *= 3; //Calculate constant
	for (int i = 0; i < 5; i++) //Loop
	{
		t5 = t5 * num; //Calculate exponet
	}
	t5 *= 2; //Calculate constant

	result = t1 + t2 + t3 + t4 + t5 - 7; //Calculate result
	return result; //End
}