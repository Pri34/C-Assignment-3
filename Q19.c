#include <stdio.h>

int main(void)
{
	int i, n, lim = 20, count = 0;
	
	for (i = 0; i < lim; i++)
	{
		printf("Enter integer: ");
		scanf("%d", &n);
		if (n%2 == 0)
			count += 1;
	}
	
	printf("\nThere are %d even numbers.\n", count);
	
	return 0;
}