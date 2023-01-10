#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *input, *output;
	char c;
	
	input = fopen(argv[1], "r");
	if (input == NULL)
	{
		printf("Illegal input file.\n");
		exit(1);
	}
	
	output = fopen(argv[2], "w");
	if (output == NULL)
	{
		printf("Illegal output file.\n");
		exit(1);
	}
	
	while((c = fgetc(input)) != EOF)
	{
		fputc(c, output);
	}
	
	fclose(input);
	fclose(output);
	
	return 0;
}