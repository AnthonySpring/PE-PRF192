#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	 int nums[5], i, m, n;
    for (i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }
	printf("\nOUTPUT:\n"); 
    for (i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0 && i % 2 == 0) {
            m = nums[i];
            n = i+1;
            printf("%d\n%d", m, n);
        }
    }

return 0;
}

