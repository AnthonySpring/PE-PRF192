/*Convert Seconds to Hours, Minutes, and Seconds 
Create a program where the user can input a number of seconds. 
The program should then convert and display this as a combination of hours, 
minutes, and seconds. 
For example, 3665 seconds should be displayed as 1 hour, 1 minute, and 5 seconds.*/
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("%d hours, %d minutes and %d second.\n", hours, minutes, seconds);

    return 0;
}
