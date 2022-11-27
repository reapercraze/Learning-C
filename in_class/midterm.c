#define N 9
int main() // Begin
{
	int a[7] = {0};
	int f1 = 1, f2 = 1;
	
	for(int i = 0; (i+2) <= N; i++) // Loop
	{
		if (i < 2) // If i is less than 2
		{
			a[i] = a[i-1] + f2; // Number previous and base case
			if (i < 1)// If i is less than 1
			{
				a[i] = f1 + f2; // Both base cases
			}

		}
		else
		{
		a[i] = a[i-1] + a[i-2]; // Both previous numbers
		}
	}
	return 0; //End
}