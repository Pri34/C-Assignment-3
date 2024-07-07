#include <stdio.h>

int main() {
	char c;
	printf("Enter a single character through the keyboard: ");
	scanf("%c", &c);
	
	printf("\'%c\' is a ", c);
	if (c >= 'A' && c <= 'Z')
		printf("capital letter");
	else if (c >= 'a' && c <= 'z')
		printf("small letter");
	else if (c >= '0' && c <= '9')
		printf("digit");
	else
		printf("special symbol");
	
	printf(".\n");	
	return 0;
}