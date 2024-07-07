#include <stdio.h>

int main(void)
{
	// Initialising set
	int n;
	printf("Enter size of set of numbers: ");
	scanf("%d", &n);
	int set[n];
	printf("\n");
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &set[i]);
	}
	printf("\n");
	
	// Finding smallest and largest numbers in set to get range
	int max = set[0], min = set[0];
	for (i = 0; i < n; i++)
	{
		if (set[i] > max)
			max = set[i];
		if (set[i] < min)
			min = set[i];
	}
	int range = max - min;
	
	// Output
	printf("Range of set = %d\n", range);	
	
	return 0;
}