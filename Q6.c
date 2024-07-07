#include <stdio.h>

int main() {
	int a, b;
	float result;
	char choice;
	
	printf("CALCULATOR IN C");
	printf("\n*********************\n");
	printf("1. Addition (+)\n");
	printf("2. Subtraction (-)\n");
	printf("3. Multiplication (*)\n");
	printf("4. Division (/)\n");
	printf("5. Remainder (%%)");
	printf("\n*********************\n");
	
	printf("\nEnter an operation(+, -, *, /, %%): ");
	scanf("%c", &choice);
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	switch (choice) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = (float) a / b;
			break;
		case '%':
			result = a % b;
			break;
		default:
			printf("\nERROR: Wrong Choice!");
			return 0;
	}
	
	printf("%d %c %d = %.3f", a, choice, b, result);
	
	return 0;
}