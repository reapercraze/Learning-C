#include <stdio.h>
#include <stdlib.h>
#include "adder.h"

int main(int argc, char *argv[])
{
	int total = 0, num;
	
	for(int i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);
		total = sum(num, total);
	}
	
	printf("The total sum is: %d", total);
	
	return 0; 
}