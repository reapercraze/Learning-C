/*************************************************
* Function Title: Main
*
* Summary: prints the English translation of a user number from 1-99
* 
* 
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
* 	Get the number from the user
*	Get the tens and ones place number
*	Print the tens place greater than 1 and with a - if it needs to 
*	Print the ones place 
*	Print 10-19 names
* End
*************************************************/

#include <stdio.h>

int main() //Begin
{
	int num, ten, one;
	
	//Get the number from the user
	printf("Enter a number between 1-99: ");
	scanf("%d", &num);
	
	printf("The English representation of %d is ", num);
	
	//Get the tens and ones place number
	ten = (num/10);
	one = (num%10);
	
	
	//Print the tens place greater than 1 and with a - if it needs to 
	if (ten > 1)
	{
		switch (ten)
		{
			case 2: 
				if (one != 0)
					{printf("Twenty-");
					break;}
				printf("Twenty");
				break;
			case 3:
				if (one != 0)
					{printf("Thirty-");
					break;}
				printf("Thirty");
				break;
			case 4:
				if (one != 0)
					{printf("Forty-");
					break;}
				printf("Forty");
				break;
			case 5:
				if (one != 0)
					{printf("Fifty-");
					break;}
				printf("Fifty");
				break;
			case 6:
				if (one != 0)
					{printf("Sixty-");
					break;}
				printf("Sixty");
				break;
			case 7:
				if (one != 0)
					{printf("Seventy-");
					break;}
				printf("Seventy");
				break;
			case 8:
				if (one != 0)
					{printf("Eighty-");
					break;}
				printf("Eighty");
				break;
			case 9:
				if (one != 0)
					{printf("Ninety-");
					break;}
				printf("Ninety");
				break;
		}
	}
	
	//Print the ones place
	if ((one != 0) && (ten != 1))
	{
		switch (one)
		{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		}
	}
	//Print 10-19 names
	else if (ten = 1)
	{
		switch (num)
		{
		case 10:
			printf("Ten");
			break;
		case 11:
			printf("Eleven");
			break;
		case 12:
			printf("Twelve");
			break;
		case 13:
			printf("Thirteen");
			break;
		case 14:
			printf("Fourteen");
			break;
		case 15:
			printf("Fiveteen");
			break;
		case 16:
			printf("Sixteen");
			break;
		case 17:
			printf("Seventeen");
			break;
		case 18:
			printf("Eighteen");
			break;
		case 19:
			printf("Nineteen");
			break;
		}
	}
	else
	{
		printf("\n Not a valid number");
	}
	
	printf(".");
	
	return 0; //End
}