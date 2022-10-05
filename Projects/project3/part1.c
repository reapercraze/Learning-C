/*************************************************
* Function Title: Main
*
* Summary: get 5 integers from user and find the largest and smallest
* 
* 
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Get 5 integers from user
* 	Check if the first two are bigger or smaller
*	Check the third against the smallest and largest
*	Check the fourth against the smallest and largest
*	Check the fifth against the smallest and largest
* 	Print output
* End
*************************************************/

#include <stdio.h>

int main() //Begin
{
	 int u1, u2, u3, u4, u5, large, small;
	 
	 //Get 5 integers from user
	 printf("Enter 5 integers in any order: ");
	 scanf("%d%d%d%d%d", &u1, &u2, &u3, &u4, &u5);
	 
	 //Check if the first two are bigger or smaller
	 if (u1 > u2)
	 {
		 large = u1;
		 small = u2;
	 }
	 else 
	 {
		 large = u2;
		 small = u1;
	 }
	 
	 //Check the third against the smallest and largest
	 if (large > u3)
	 {
		 if (small > u3)
			 small = u3;
	 }
	else 
		large = u3;
	
	//Check the fourth against the smallest and largest
	if (large > u4)
	{
		if (small > u4)
			small = u4;
	}
	else 
		large = u4;
	
	//Check the fifth against the smallest and largest
	if (large > u5)
	{
		if (small > u5)
			small = u5;
	}
	else 
		large = u5;
	
	//Print output
	printf("The largest integer is: %d\n", large);
	printf("The smallest integer is: %d", small);
	
	 
	 return 0; //End
}