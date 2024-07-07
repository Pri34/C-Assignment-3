#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	// Calculating factorial
	int i, fact = 1;
	for (i = n; i > 0; i--)
	{
		fact = fact * i;
	}
	
	// Output
	printf("(%d)! = %d", n, fact);
	
	return 0;
}