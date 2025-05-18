#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int side_length;
	int i,j; 
    scanf("%d", &side_length);
    if (side_length <= 0) {
        printf("Invalid input. Side length must be greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= side_length; i++) {
        for (j = 1; j <= side_length; j++) {
            if (i == 1 || i == side_length || j == 1 || j == side_length) {
                printf("* ");
            } else { 
                printf("  ");
            }
        }
        printf("\n");
    }

return 0;
}

