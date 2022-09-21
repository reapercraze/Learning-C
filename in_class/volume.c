#include <stdio.h>

int main(void)
{
	int h, w, l, v;
	printf("Enter height: ");
	scanf("%d", &h);
	printf("Enter width: ");
	scanf("%d", &w);
	printf("Enter length: ");
	scanf("%d", &l);
	
	v = h * w * l;
	printf("Volume = %d\n", v);
	return 0;
}