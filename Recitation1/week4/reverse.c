/*
Function name: Main

Summary: prints the reverse of a user number

Pseudocode:

Begin
	Get a two digit number from the user
	Calculate the tens number
	Calculate the ones number
	Print the reverse
End
*/

#include <stdio.h>

int main()
{
	int num, ten, one;

	//Get a two digit number from the user
	printf("Enter a two digit number: ");
	scanf_s("%2d", &num);

	//Calculate the tens number
	ten = num / 10;
	//Calculate the ones number
	one = num % 10;

	//Print the reverse
	printf("The reverse of your number is %d%d", one, ten);

	return 0;
}