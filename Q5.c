#include <stdio.h>

int main() {
	int days;
	float fine;
	printf("Enter no. of days late: ");
	scanf("%d", &days);
	
	if (days > 30) printf("TOO LATE! Your membership is cancelled.\n");
	else {
		if (days <= 5) fine = 0.5;
		else if (days > 10) fine = 5;
		else fine = 1;
		printf("You have to pay a fine of %.2f rupees", fine);
	}
	
	return 0;
}