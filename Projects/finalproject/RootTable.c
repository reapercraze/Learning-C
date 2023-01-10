/*************************************************
* Function Title: Main
*
* Summary: 
* 
* 
* Inputs: 
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Initialize my list
*	Check to see if enough arguments were given
*	Open input file
*	While input is not end of file
*		If the scanned number is an integer
*			If the number is a duplicate
*				Initialize new node
*				Insert new node into linked list
*	Open output
*	Loop every node in linked list
*		Write node to file
*	Delete nodes from list
*	Close files
* End
*************************************************/

#include "myLinkedList.h"

int main(int argc, char *argv[])
{ //Begin
	int n;
	FILE *input, *output;
	
	//Initialize my list
	struct node *mylist = NULL;
	struct node *new_node, *cur;
	
	//Check to see if enough arguments were given
	if (argc != 3)
	{
		fprintf(stderr, "Error! Command-line arguments.\n");
		exit(1);
	}
	
	//Open input file
	input = fopen(argv[1], "r");
	if (input == NULL)
	{
		fprintf(stderr, "Error! Can't open %s.\n", argv[1]);
		exit(1);
	}
	
	//While input is not end of file
	while (!feof(input))
	{
		//If the scanned number is an integer
		if ((fscanf(input, "%d", &n)) > 0)
		{
			//If the number is a duplicate
			if ((search_list(mylist, n)) == NULL)
			{
				//Allocate memory for new node
				new_node = malloc(sizeof(struct node));
				if (new_node == NULL)
				{
					fprintf(stderr, "Error! Memory allocation.\n");
					exit(1);
				}
				
				//Initialize new node
				new_node->x = n;
				new_node->x_root2 = sqrt(n);
				new_node->x_root3 = cbrt(n);
				new_node->x_root4 = sqrt(sqrt(n));
				
				
				//Insert new node into linked list
				mylist = insert_node(mylist, new_node);
			}
		}
	}
	
	//Open output
	output = fopen(argv[2], "w");
	if (output == NULL)
	{
		fprintf(stderr, "Error! Can't open %s.\n", argv[2]);
		exit(1);
	}
	
	//Loop every node in linked list
	for(cur = mylist; cur != NULL; cur = cur->next)
	{
		//Write node to file
		fprintf(output, "%d\t%.4f\t%.4f\t%.4f\n", cur->x, 
		cur->x_root2, cur->x_root3, cur->x_root4);
	}
	
	//Delete nodes from list
	delete_list(mylist);
	
	//Close files
	fclose(output);
	fclose(input);
	
	return 0; //End
}