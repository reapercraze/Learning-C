/*************************************************
* Function Title: Main
*
* Summary: estimate pi using the number of terms that a user inputs
* 
* 
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Get number of terms from user
*	Loop 
*		Determine if pi term is negative or positive
*		Calculate pi estimate term
*		Add or subtract to pi estimate
*	Print output
* End
*************************************************/

#include <stdio.h>

int main() //Begin
{
	int n;
	float pie, term;
	
	//Get number of terms from user
	printf("Enter an integer n. ");
	printf("The value of pi will be calculated");
	printf(" using n terms of an infinite series.");
	printf("\nn: ");
	scanf("%d", &n);
	
	pie = 0.0;
	//Loop
	for (int i = 0; i < n; i++)
	{
		//Determine if pi term is negative or positive
		if ((i % 2) == 0)
		{
			//Calculate pi estimate term
			term = (4.0 / (1.0 + (2.0 * i)));
			//Add or subtract to pi estimate
			pie += term;
		}
		else 
		{
			//Calculate pi estimate term
			term = (4.0 / (1.0 + (2.0 * i)));
			//Add or subtract to pi estimate
			pie -= term;
		}
	}
	//Print output
	printf("The approximation of pi using %d terms is: %f", n, pie);
	
	return 0; //End
}