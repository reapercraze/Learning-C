/*************************************************
* Function Title: Main
*
* Summary: Finds the first and last word ordering alphabetically
* 
* 
* Inputs: amount of words to enter
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Change compand line input to int
*	Loop through amount of words
*		If it is the first loop
*			Get a word from user
* 			Initialize smallest and largest
*		Else
*			Get a word from user
*			If input is smaller
*				Input is smallest
*			If input is larger
*				Input is largest
*	Print output
* End
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 25

int main(int argc, char *argv[]) //Begin
{
	int words;
	char largest[N], smallest[N], input[N];
	
	//Change compand line input to int
	words = atoi(argv[1]);
	
	//Loop through amount of words
	for(int i = 0; i < words; i++)
	{
		if(i == 0) //If it is the first loop
		{
			//Get a word from user
			printf("Enter word: ");
			scanf("%s", input);
	
			//Initialize smallest and largest
			strcpy(smallest, input);
			strcpy(largest, input);
		} 
		else{ //Else
			//Get a word from user
			printf("Enter word: ");
			scanf("%s", input);
			
			//If input is smaller
			if(strcmp(input, smallest) < 0)
			{
				//Input is smallest
				strcpy(smallest, input);
			}
			
			//If input is larger
			if(strcmp(input, largest) > 0)
			{
				//Input is largest
				strcpy(largest, input);
			}
		}
	}
	
	//Print output
	printf("\nSmallest word: %s", smallest);
	printf("\nLargest word: %s", largest);
	
	return 0; //End
}
	