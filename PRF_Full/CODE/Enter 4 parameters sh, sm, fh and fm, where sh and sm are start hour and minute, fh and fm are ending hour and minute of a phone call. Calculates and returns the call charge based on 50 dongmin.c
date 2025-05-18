// C3: Enter 4 parameters sh, sm, fh and fm, where sh and sm are start hour and minute, fh and fm are ending hour and minute of a phone call. Calculates and returns the call charge based on 50 dong/minute rate. Suppose sh and fh are between 0 and 12, fh > sh, sm and fm are between 0 and 60.

#include <stdio.h>

int main() {
    int sh, sm, fh, fm;
    int start_total_minutes, end_total_minutes, call_duration, call_charge;

    printf("Enter start hour = ");
    scanf("%d", &sh);
    printf("Enter start minute = ");
    scanf("%d", &sm);

    printf("Enter ending hour = ");
    scanf("%d", &fh);
    printf("Enter ending minute = ");
    scanf("%d", &fm);

    start_total_minutes = sh * 60 + sm;
    end_total_minutes = fh * 60 + fm;

    call_duration = end_total_minutes - start_total_minutes;

    call_charge = call_duration * 50;

    printf("Calling charge = %d\n", call_charge);

    return 0;
}

