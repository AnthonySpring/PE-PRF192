#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
    //system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int n = 7;
    //scanf("%d", &n);
    int i;
    int a[n];
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    int b[n]; // mang tan suat
    int j;
    int count;
    // dem toi phia sau
    for (i=0; i<n; i++) {
        count = 0;
        for (j=i; j<n; j++) {
            if (a[i] > 9 && a[i] <100 && a[i]==a[j])
                count++;
        }
        b[i] = count;
    }

    // tim max cua b
    int max = b[0];
    for (i=0; i<n; i++) {
        if (max < b[i]) {
            max = b[i];
        }
    }

    // in ra
    if (max == 0) {
        printf("no two-digit number");
    } else {
        for (i=0; i<n; i++) {
            if (b[i] == max)
                printf("%d ", a[i]);
        }
    }
    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    //system("pause");
    return(0);
}