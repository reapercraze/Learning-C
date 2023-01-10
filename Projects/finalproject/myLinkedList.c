#include "myLinkedList.h"

/*************************************************
* Function Title: insert_node
*
* Summary: Loops through linked list to find where new node is 
* 	greater than previous node and less than current node then
*	makes new node point to current and previous point to new node
* 
* 
* Inputs: linked list pointer, pointer to new node
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Loop each of the nodes starting with current at start of linked list
* 	If current is not null and new node value is greater than current value
*	Make previous equal to current and current equal to next node
*	Make new node next point to current node
*	If previous equals null
*		Return start of linked equals new node
*	Else
*		Previous next points to new node
* End
*************************************************/

struct node * insert_node(struct node *list, struct node *new_node)
{ //Begin
	struct node *cur, *prev;
	
	//Loop each of the nodes starting with current at start of linked list
	for (cur = list, prev = NULL;
	//If current is not null and new node value is greater than current value
	cur != NULL && new_node->x > cur->x; 
	//Make previous equal to current and current equal to next node
	prev = cur, cur = cur->next)
		;
	
	//Make new node next point to current node
	new_node->next = cur;
	
	//If previous equals null
	if (prev == NULL)
	{
		//Start of linked equals new node
		list = new_node;
	}
	else//Else
	{
		//Previous next points to new node
		prev->next = new_node;
	}
	
	return list;
}//End

/*************************************************
* Function Title: search_list 
*
* Summary: Searches linked list to find a node that has a certain number 
* 
* 
* Inputs: linked list pointer, double number
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Loop each of the nodes
*		If node value equals number
*			Return pointer
*	Return null
* End
*************************************************/

struct node * search_list(struct node *list, int number)
{ //Begin
	struct node *p;
	
	//Loop each of the nodes
	for (p = list; p != NULL; p = p->next)
	{
		//If node value equals number
		if (p->x == number)
			//Return pointer
			return p;
	}
	//Return null
	return NULL;
} //End

/*************************************************
* Function Title: delete_list
*
* Summary: Deletes all the nodes in a linked list
* 
* 
* Inputs: linked list pointer
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*	Loop each of the nodes
*		Free the memory
* End
*************************************************/

void delete_list(struct node *list)
{ //Begin
	struct node *cur, *temp;
	
	cur = list;
	
	//Loop each of the nodes
	while (cur != NULL)
	{
		temp = cur;
		cur = cur->next;
		
		//Free the memory
		free(temp);
	}
}//End
