/*************************************************
* Function Title: Main
*
* Summary: Uxer enters words in any order, and the 
*	list gets sorted into ascending order.
* 
* 
* Inputs: amount of words to enter
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Allocate amount of words
*	Loop
*		Get word from user
*		Allocate memory for word
* 		Put word into array
*	Use bubble sort algorithm to sort array
*	Print array
* End
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 15 

int main(int argc, char *argv[]) //Begin
{
	int num_words;
	char **words; 
	char word[N];
	
	//Allocate amount of words
	num_words = atoi(argv[1]);
	words = malloc(sizeof(char *) * num_words);
	if (words == NULL)
	{
		printf("Memory Allocation Error!\n");
		exit(1);
	}
	
	//Loop
	for (int i = 0; i < num_words; i++)
	{
		//Get word from user
		printf("Enter a word: ");
		gets(word);
		//Allocate memory for word
		words[i] = malloc(strlen(word)+1);
		if (words[i] == NULL)
		{
			printf("Memory Allocation Error!\n");
			exit(1);
		}
		//Put word into array
		strcpy(words[i], word);
	}
	
	//Use bubble sort algorithm to sort array
	for (int i = 0; i < num_words; i++)
	{
		for (int j = 0; j < num_words - i - 1; j++)
		{
			if (strcmp(words[j], words[j+1]) > 0)
			{
				strcpy(word, words[j]);
				strcpy(words[j], words[j+1]);
				strcpy(words[j+1], word);
			}
		}
	}
	 //Print array
	printf("Sorted words: ");
	for (int i = 0; i < num_words; i++)
	{
		printf("%s ", words[i]);
	}
	
	return 0; //End
}