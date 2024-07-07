#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	// Checking if n is prime, by checking if it divides any num between n-1 and 2
	int i, prime = 1;
	for (i = n-1; i > 1; i--)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}
	
	// Output
	(prime == 1) ? printf("\n%d is a prime number.\n", n) : printf("\n%d is NOT a prime number.\n", n);
	
	return 0;
}