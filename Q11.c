#include <stdio.h>

int main(void)
{
	int x, n;
	printf("Enter a base: ");
	scanf("%d", &x);
	printf("Enter a power: ");
	scanf("%d", &n);
	printf("\n");
	
	// x ^ n == x * x * x * ... n-times
	int i, exp;
	for (i = 0; i < n; i++)
	{
		exp = exp * x;
	}
	
	// Output
	printf("(%d) ^ %d = %d\n", x, n, exp);
	
	return 0;
}