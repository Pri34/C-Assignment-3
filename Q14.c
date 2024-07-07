#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("\nMULTIPLICATION TABLE OF %d:-\n", n);
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d X %-2d = %d\n", n, i, n*i);
	}
	
	return 0;
}