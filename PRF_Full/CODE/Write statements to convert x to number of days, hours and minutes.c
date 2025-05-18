#include <stdio.h>

int main() {
    int x, days, hours, minutes;

    printf("Enter the number of minutes: ");
    scanf("%d", &x);

    days = x / 1440;

    hours = (x % 1440) / 60;

    minutes = x % 60;

    printf("days = %d, hours = %d, minutes = %d\n", days, hours, minutes);

    return 0;
}

