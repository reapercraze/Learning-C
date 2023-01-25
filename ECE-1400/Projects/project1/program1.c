/*************************************************
* Program name: program1.c
* Function Title: Main
*
* Summary: Get 16 numbers from user to print in a 4x4 square 
*			computes the sums and shows the sums of all the columns and rows
* Inputs: none
* Outputs: none
*
* Compile instructions:  gcc program.c –o program1.exe
**************************************************
* Pseudocode
*
* Begin
*   Get input from user
*	print input in 4x4 square
*	compute the row sums
*	print row sums
*	compute the column sums
*	print column sums
*	comput diagnol sums
*	print diagnol sums
* End
*************************************************/

#include <stdio.h>

int main() // Begin
{
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;
	int row1, row2, row3, row4;
	int col1, col2, col3, col4;
	int diagonal1, diagonal2;

	// Get input from user
	printf("Enter the digits 1-16 in any order: ");
	scanf_s("%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8);
	scanf_s("%d%d%d%d%d%d%d%d", &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);

	// print input in 4x4 sqaure
	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", x1, x2, x3, x4, x5, x6, x7, x8);
	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", x9,x10,x11,x12,x13,x14,x15,x16);
	
	// compute row sums
	row1 = x1 + x2 + x3 + x4;
	row2 = x5 + x6 + x7 + x8;
	row3 = x9 + x10 + x11 + x12;
	row4 = x13 + x14 + x15 + x16;
	// print row sums
	printf("Row sums: \t%d\t%d\t%d\t%d\n", row1, row2, row3, row4);

	// compute column sums
	col1 = x1 + x5 + x9 + x13;
	col2 = x2 + x6 + x10 + x14;
	col3 = x3 + x7 + x11 + x15;
	col4 = x4 + x8 + x12 + x16;
	// print column sums
	printf("Column sums: \t%d\t%d\t%d\t%d\n", col1, col2, col3, col4);

	// compute diagnol sums
	diagonal1 = x1 + x6 + x11 + x16;
	diagonal2 = x4 + x7 + x10 + x13;
	// print diagnol sums
	printf("Diagonal sum: \t%d\t%d\n", diagonal1, diagonal2);

	return 0; // end
}