#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	
	printf("Number of arguments recieved: %d\n", argc);
	
	for (i = 0; i < argc; i++)
	{
		printf("%s has length %d\n", argv[i], strlen(argv[i]));
	}
}