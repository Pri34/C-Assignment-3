#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter no of fibonacci numbers: ");
	scanf("%d", &n);
	printf("\n");
	
	// Fibonacci series has ith element = (i-1)th element + (i-2)th element
	int i, temp1, temp2, num;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			num = 0;
			temp1 = 0;
		}
		else if (i == 1)
		{
			num = 1;
			temp2 = 1;
		}
		else
		{
			num = temp1 + temp2;
			temp1 = temp2;
			temp2 = num;
		}
		printf("%d\n", num);
	}
	
	return 0;
}