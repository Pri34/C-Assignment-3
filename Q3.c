#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	printf("\n%d is an ", n);
	printf("%s", (n % 2 == 0) ? "even" : "odd");
	
	if (n < 0) printf(" negative");
	else if (n > 0) printf(" positive");
	
	printf(" number.\n");
		
	return 0;
}