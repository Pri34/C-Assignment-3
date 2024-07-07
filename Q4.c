#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	printf("\n%d is divisible by ", n);
	if (n % 5 == 0 && n % 8 == 0) printf("5 and 8");
	else if (n % 5 == 0) printf("5");
	else if (n % 8 == 0) printf("8");
	else printf("neither 5 nor 8");
	
	printf(".\n");
	return 0;
}