#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0, num;
	
	for(int i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum += num;
	}
	
	printf("The total sum is: %d", sum);
	
	return 0; 
}