#include <stdio.h>

int main(void)
{
	int low = 1, high = 500;
	printf("Armstrong numbers between %d and %d are:-\n\n", low, high);
	
	// Armstrong Numbers is equal to the sum of cubes of its digits
	int i, j;
	for (i = low; i <= high; i++)
	{
		// Accessing each digit of i and adding them
		int sum = 0;
		for (j = i; j > 0; j /= 10)
		{
			int digit = j % 10;
			sum += digit*digit*digit;
		}
		
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}