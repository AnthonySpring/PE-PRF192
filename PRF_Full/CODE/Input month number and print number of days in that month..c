// C9: Write a C program to input month number and print number of days in that month.

#include <stdio.h>

int main() {
	int month_number;
	printf("Enter month_number: ");
	scanf("%d", &month_number);
	
	int days;	
	if (month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 || month_number == 8 || month_number == 10 || month_number == 12) {
        days = 31;
	}
	else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11 ) {
		days = 30;
	}
	else if (month_number == 2) {
		days = 28;
	}
	printf("month_number %d has %d days", month_number, days);
	
	return 0;
}

