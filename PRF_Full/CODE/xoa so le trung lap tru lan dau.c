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
    // dem toi phia truoc khong bao gom chinh no
    for (i=n-1; i>=0; i--) {
        count = 0;
        for (j=i-1; j>=0; j--) {
            if (a[i]%2!=0 && a[i]==a[j])
                count++;
        }
        b[i] = count;
    }

    // in ra nhung phan tu khong trung phia truoc
    for (i=0; i<n; i++) {
        if (b[i] == 0)
            printf("%d\n", a[i]);
    }
    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    //system("pause");
    return(0);
}