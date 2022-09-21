/*
Begin
	get length from user
	cube length 
	print computation to screen
End
*/

#include <stdio.h>

int main()
{
	int length, volume, i;
	float x;

	printf("Enter a length for a cube: "); 
	scanf_s("%d -%d -%d", &length, &x,&i);		//length from user

	volume = length * length * length;	//cube length
	printf("The volume of the cube is: %d\n", volume);	//print computation to screen
	printf("%d -%d -%d", length, x, i);

	return 0;
}