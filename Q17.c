#include <stdio.h>

int main(void)
{
	int n = 0, sum = 0, lim = -999;
	
	while (n != lim)
	{
		// Adding previous value of n to sum to avoid adding -999
		sum += n;
		printf("Enter number: ");
		scanf("%d", &n);
	}
	printf("\n");
	
	// Output
	printf("\nSum of all number read before %d = %d\n", lim, sum);
	
	return 0;
}