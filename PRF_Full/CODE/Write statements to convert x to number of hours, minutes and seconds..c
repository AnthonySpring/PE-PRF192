// Write statements to input data for a variable x, which contains the number of seconds. Write statements to convert x to number of hours, minutes and seconds.

#include <stdio.h>

int main() {
    int x, hours, minutes, seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &x);

    hours = x / 3600;

    minutes = (x % 3600) / 60;

    seconds = x % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

