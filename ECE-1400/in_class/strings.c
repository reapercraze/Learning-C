int main(void)
{
	char *s = "This is a test.";
	int count = 0;
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}
	printf("There are %d spaces in %s\n", count, s);
	
	return 0;
}