#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int h,i,j;

    // Prompt the user to enter the height of the pyramid
    
    scanf("%d", &h);

    // Check if the height is within the specified range
    if (h >= 20 || h <= 0) {
        printf("Invalid input. Height must be less than 20 and greater than 0.\n");
        return 1;
    }

    // Loop through each row of the pyramid
    for (i = 1; i <= h; i++) {
        // Print spaces for each row to create the pyramid shape
        for (j = 1; j <= h - i; j++) {
            printf(" ");
        }
        // Print the stars for the first and last rows
        if (i == 1 || i == h) {
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
        } else { // Print stars only at the beginning and end of the row
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

return 0;
}

