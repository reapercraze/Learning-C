#include <stdio.h>
struct student {
	char* first_name;
	char* last_name;
	struct student* next;
};

struct student* delete_student(struct student* first, char* last_name, char* first_name);

int main() 
{

	;
}



struct student* delete_student(struct student* first, char* last_name, char* first_name)
{
	struct student* cur, * prev;

	//Loop through each of the nodes starting with current at first
	for (cur = first, prev = NULL;
		//If current is not null and 
		cur != NULL && 
		//Current last name and first name do not not match function input
		(cur->last_name != last_name && cur->first_name != first_name);
		//Make previous equal to current and current equal to next node
		prev = cur, cur = cur->next)
		;

	//If current is null
	if (cur == NULL)
	{
		//Print not student not found
		printf("Student %s %s not found!", first_name, last_name);
		//Return first
		return first;
	}

	//If previous equals null
	if (prev == NULL)
	{
		//First now equal next node
		first = first->next;
	}

	else//Else
	{
		//Previous next points to current next
		prev->next = cur->next;
	}

	//Free current
	free(cur);
	return first;
}//End

/*
*Pseudocode
*
* Begin
*	Loop through each of the nodes starting with current at first
*	If current is not null and 
		Current last name and first name do not not match function input
*	Make previous equal to current and current equal to next node
*	If current is null
*		Print not student not found
*		Return first
*	If previous equals null
*		First now equal next node
*	Else
*		Previous next points to current next
*	Free current
* End
*/