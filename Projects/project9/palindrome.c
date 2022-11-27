/*************************************************
* Function Title: Main
*
* Summary: Checks if a word/phrase is a palindrome or not
* 
* 
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Get characters from user
* 	While character is not the newline character
* 		Check if the character is a letter
*			Assign lower case character to array 
*			Increment pointer
*	While word is a palindrome and we walked the array 
*		If the character of *p equals the character of *q 
*			Walk the pointers to each other
*		Else not a palindrome
*		If the pointers have crossed each other
*			Stop
*	If palindrome is True
*		Print
*	Else print
* End
*************************************************/

#include <stdio.h>
#include <ctype.h>
#define N 200

int main() // Begin
{
	char a[N], temp, *p = a, *q = a;
	int pal = 1, stop = 0;
	
	
	printf("Enter a word/phrase: ");
	
	// Get characters from user
	// While character is not the newline character
	temp = getchar();
	while (temp != '\n')
	{
		// Check if the character is a letter
		if (temp >= 'A' && temp <= 'z')
		{
			// Assign lower case character to array 
			*p = tolower(temp);
			// Increment pointer
			p++;
		}
		temp = getchar();
	} 
	
	p--;
	
	// While word is a palindrome and we walked the array 
	while (pal != 0 && stop == 0)
	{
		// If the character of *p equals the character of *q 
		if (*p == *q)
		{
			// Walk the pointers to each other
			p--;
			q++;
		} else
		{
			// Else not a palindrome
			pal = 0;
		}
		// If the pointers have crossed each other
		if (p <= q)
		{
			// Stop
			stop = 1;
		}
	}
	
	// If palindrome is True
	if (pal == 1)
	{
		// Print
		printf("The word/phrase is a palindrome.");
	} else
	{
		// Else print
		printf("The word/phrase is not a palindrome.");
	}
	
	return 0; // End
}