// 4: Write a C program that takes hours and minutes as input, evaluation the values, if the values are correct then calculates the total number of minutes.

#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;

    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (hours < 0 || hours > 23) {
        printf("Invalid hours. Please enter a value between 0 and 23.\n");
    } 
	else if (minutes < 0 || minutes > 59) {
        printf("Invalid minutes. Please enter a value between 0 and 59.\n");
    } 
	else {
        totalMinutes = hours * 60 + minutes;
        printf("Total minutes: %d\n", totalMinutes);
    }
    return 0;
}

