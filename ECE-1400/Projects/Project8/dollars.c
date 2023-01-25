/************************************************* 
* Function Title: Main 
* 
* Summary: print the amount of bills an amount of money can be broken down into
* 
* Inputs: none 
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
*   Get an amount of money 
* 	Print the amount of each bills
* End 
*************************************************/ 
 
#include <stdio.h> 

void pay_amount(int dollars, int *twenties, int *tens, int *fives,
 int *twos, int *ones);


int main() //Begin
{
	int amount, twenties = 0, tens = 0, fives = 0, twos = 0, ones = 0;
	
	printf("Enter an amount to be broken down into bills: $");
	scanf("%d", &amount); //Get an amount of money 
	
	pay_amount(amount, &twenties, &tens, &fives, &twos, &ones);
	
	printf("The following numbers of the specified bills are required:\n");
	//Print the amount of each bills
	printf("$20: %d\n$10: %d\n$5: %d\n", twenties, tens, fives);
	printf("$2: %d\n$1: %d", twos, ones);
	
	return 0; //End
}

/************************************************* 
* Function Title: pay_amount
* 
* Summary: Calculate the amount of bills an amount 
* 	of money can be broken down into
* 
* Inputs: dollars, *twenties, *tens, *fives, *twos, *ones
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
*   Calculate amount of twenties
* 	Calculate left_over
*   Calculate amount of tens
* 	Calculate left_over
*   Calculate amount of fives
* 	Calculate left_over
*   Calculate amount of twos
* 	Calculate left_over
*   Calculate amount of ones
* 	Calculate left_over
* End 
*************************************************/ 

void pay_amount(int dollars, int *twenties, int *tens, int *fives, 
int *twos, int *ones) //Begin
{
	int left_over = dollars;
	
	*twenties = left_over / 20; //Calculate amount of twenties
	left_over = left_over - (*twenties * 20); //Calculate left_over
	
	*tens = left_over / 10; //Calculate amount of tens
	left_over = left_over - (*tens * 10); //Calculate left_over
	
	*fives = left_over / 5; //Calculate amount of fives
	left_over = left_over - (*fives * 5); //Calculate left_over
	
	*twos = left_over / 2; //Calculate amount of twos
	left_over = left_over - (*twos * 2); //Calculate left_over
	
	*ones = left_over / 1; //Calculate amount of ones
	left_over = left_over - (*ones * 1); //Calculate left_over
	
	return; //End
}