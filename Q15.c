#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	
	// HCF = Greatest number which divides both numbers
	int i, hcf = 1;
	int min = (a>b) ? a : b;
	for (i = min; i > 0; i--)
	{
		if (a%i==0 && b%i==0)
		{
			hcf = i;
			break;
		}
	}
	
	// Output
	printf("\nHCF of %d and %d = %d\n", a, b, hcf);
	
	return 0;
}