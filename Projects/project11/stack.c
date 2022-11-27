#include "stack.h"
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

/************************************************* 
* Function Title: make_empty
* 
* Summary: make stack empty
* 
* Inputs: none 
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Top equals 0
* End 
*************************************************/ 
void make_empty(void) //Begin
{
	top = 0; //Top equals 0
} //End

/************************************************* 
* Function Title: is_empty
* 
* Summary: checks to see if the stack is empty
* 
* Inputs: none 
* Outputs: int
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Boolean value if top equals 0
* End 
*************************************************/ 
int is_empty(void)//Begin
{
	//Boolean value if top equals 0
	return top == 0; 
}//End

/************************************************* 
* Function Title: is_full
* 
* Summary: checks to see if the stack is full
* 
* Inputs: none 
* Outputs: int
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Boolean value if top equals STACK_SIZE
* End 
*************************************************/ 
int is_full(void)//Begin
{
	//Boolean value if top equals STACK_SIZE
	return top == STACK_SIZE;
}//End

/************************************************* 
* Function Title: push
* 
* Summary: checks to see if the stack is full else puts int value on top
* 
* Inputs: int
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	If Full
*		Stack_overflow
*	Else 
*		Add contents to top
* End 
*************************************************/ 
void push(int i)//Begin
{
	if (is_full()) //If Full
	{
		stack_overflow(); //Stack_overflow
	} else //Else
		contents[top++] = i; //Add contents to top
}//End

/************************************************* 
* Function Title: pop
* 
* Summary: Checks if the stack is empty else takes int value of the top
* 
* Inputs: none 
* Outputs: int
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	If empty
*		Stack_underflow
*	Else
*		Return the int on the top of the stack
* End 
*************************************************/ 
int pop(void)//Begin
{
	if (is_empty()) //If empty
	{
		stack_underflow(); //Stack_underflow
	} else //Else
	{
		//Return the int on the top of the stack
		return contents[--top];
	}
}//End

/************************************************* 
* Function Title: Stack_overflow
* 
* Summary: print and exit
* 
* Inputs: none 
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Print
* 	Exit
* End 
*************************************************/ 
void stack_overflow(void)//Begin
{
	printf("\nExpression is too complex\n"); //Print
	exit(EXIT_FAILURE); //Exit
}//End

/************************************************* 
* Function Title: stack_underflow
* 
* Summary: print and exit
* 
* Inputs: none 
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Print
* 	Exit
* End 
*************************************************/ 
void stack_underflow(void)//Begin
{
	printf("\nNot enough operands in expression\n"); //Print
	exit(EXIT_FAILURE); //Exit
}//End