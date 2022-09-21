/*************************************************
* Function Title: Main
*
* Summary: Compute the check digit on an EAN number
* 
* 
* Inputs: none
* Outputs: none
*
* Compile instructions:  gcc program2.c -o program2.exe
**************************************************
* Pseudocode
*
* Begin
*	Get the first 12 digits of EAN
*	Compute first sum
*	Compute second sum
*	Compute the product and sumation
*	Compute the remainder
*	Subtract the remainder from 9
* End
*************************************************/

#include <stdio.h>

int main() //Begin
{
	int f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12;
	int first_sum, sencond_sum, product, rem, ans;

	//Get the first 12 digits of EAN
	printf("Enter first 12 digits of an EAN: ");
	scanf_s("%1d %1d %1d %1d %1d %1d", &f1, &f2, &f3, &f4, &f5, &f6);
	scanf_s("%1d %1d %1d %1d %1d %1d", &f7, &f8, &f9, &f10, &f11, &f12);

	//Compute first sum
	first_sum = f2 + f4 + f6 + f8 + f10 + f12;
	//Compute second sum
	sencond_sum = f1 + f3 + f5 + f7 + f9 + f11;
	//Compute the product and sumation
	product = ((first_sum * 3) + sencond_sum) - 1;
	//Compute the remainder
	rem = product % 10;
	//Subtract the remainder from 9
	ans = 9 - rem;

	printf("The check digit should be: %d", ans);

	return 0; //End
}