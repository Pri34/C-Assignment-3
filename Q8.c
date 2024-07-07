#include <stdio.h>
#include <math.h>

int main(void)
{
	// Using an array to store the nos
	int n = 5, nums[n];
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &nums[i]);
	}
	printf("\n");
	
	// Calculating avg
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += nums[i];
	}
	float avg = (float) sum / n;
	
	// Calculating max no
	int max = nums[0];
	for (i = 0; i < n; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
		}
	}
		
	// Calculating min no
	int min = nums[0];
	for (i = 0; i < n; i++)
	{
		if (nums[i] < min)
		{
			min = nums[i];
		}
	}
	
	// Calculating standard deviation of nums
	int dev_sum = 0;
	for (i = 0; i < n; i++)
	{
		int dev = nums[i] - avg;
		dev_sum += pow(dev, 2);
	}
	float std_dev = sqrt(dev_sum / (float) n);
	
	// Output
	printf("Average = %.3f\n", avg);
	printf("Maximum number = %d\n", max);
	printf("Minimum number = %d\n", min);
	printf("Standard Deviation = %.3f\n", std_dev);
	
	return 0;		
}