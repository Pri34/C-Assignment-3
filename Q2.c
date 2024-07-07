#include <stdio.h>

int main() {
	int a, b, c, max;
	printf("Enter first integer: ");
	scanf("%d", &a);
	printf("Enter second integer: ");
	scanf("%d", &b);
	printf("Enter third integer: ");
	scanf("%d", &c);
	
	if (a > b)
		max = (a > c) ? a : c; 
	else
		max = (b > c) ? b : c;
		
	printf("\n%d is the greatest integer.\n", max);
		
	return 0;
}
