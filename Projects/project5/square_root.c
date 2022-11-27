/*************************************************
* Function Title: Main
*
* Summary: estimate the square root of the number that the user enters
* 
* 
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Get number to be square rooted from user
* 	Compute first estimate
*	Compute the second estimate
* 	Compute the difference and compare to see if it is significant
* End
*************************************************/
#include <stdio.h>
#include <math.h>

int main() //Begin
{
	
	double n, y = 1.0, avg, avg_old, x, diff;
	
	//Get number to be square rooted from user
	printf("Enter a positive number: ");
	scanf("%lf", &n);

	//Compute first estimate
	x = n / y;
	avg = ((x + y) / 2);
	avg_old = avg; 
	y = avg;

	do
	{
		//Compute the second estimate
		x = n / y;
		avg = ((x + y) / 2);
		
		//Compute the difference and compare to see if it is significant
		diff = avg_old - avg;
		diff = fabs(diff);
		
		
		avg_old = avg;
		y = avg;

	} while (diff > (.00001 * y));

	printf("Square root: %.5lf\n", avg);

	return 0; //End
}