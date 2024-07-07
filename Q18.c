#include <stdio.h>

int main(void)
{
	int n = 0, lim = 100;
	
	while (n <= lim)
	{
		printf("Enter number: ");
		scanf("%d", &n);
	}
	printf("\nQUIT!\n");
	
	return 0;
}