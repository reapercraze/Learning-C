/************************************************* 
* Function Title: Main 
* 
* Summary: Calculate an RPN expression and 
* 	loop until the user puts in an input that is not allowed 
* 
* Inputs: none 
* Outputs: none 
* 
************************************************** 
* Pseudocode 
* 
* Begin 
* 	Forever Loop
*		Make stack empty
*		While characher is not the enter character
*			If characher is a digit
*				Push onto stack
*			Else 
*				Swich on characher
*					Case on plus
*						Pop two numbers
*						Push the addition result
*					Case on subtract
*						Pop two numbers
*						Push the subtraction result
*					Case on division
*						Pop two numbers
*						Push the division result
*					Case on multiplication
*						Pop two numbers
*						Push the multiplication result
*					Case on equal
*						Print result
*					Case on space
*					Default exit
* End 
*************************************************/ 
#include "stack.h"

int main() //Begin
{
	char *input, ch;
	char num1, num2;
	int i = 0;
	
	for (; ;) //Forever Loop
	{
		make_empty(); //Make stack empty
		
		printf("Enter an RPN expression: ");
		
		//While characher is not the enter character
		while ((ch = getchar()) != '\n') 
		{
			//If characher is a digit
			if (ch >= '0' && ch <= '9')
			{
				push(ch - '0'); //Push onto stack
			}
			else //Else
			{
				switch (ch) //Swich on characher
				{
					case '+': //Case on plus
						//Pop two numbers
						num1 = pop();
						num2 = pop();
						//Push the addition result
						push(num1 + num2);
						break;
					
					case '-':
						//Pop two numbers
						num2 = pop();
						num1 = pop();
						//Push the subtraction result
						push(num1 - num2);
						break;
						
					case '/':
						//Pop two numbers
						num2 = pop();
						num1 = pop();
						//Push the division result
						push(num1 / num2);
						break;
						
					case '*':
						//Pop two numbers
						num1 = pop();
						num2 = pop();
						//Push the multiplication result
						push(num1 * num2);
						break;
					
					case '=': //Case on equal
						//Print result
						printf("Value of expression: %d\n", pop());
						break;
					
					case ' ': break; //Case on space
					
					default:  exit(EXIT_FAILURE); //Default exit
				}
			}
		}
	}
	
	return 0; //End
}