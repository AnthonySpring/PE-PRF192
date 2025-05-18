#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n, i, min_index = -1, max_index = -1, min = 1000000, max = -1000000, temp;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            if (a[i] < min)
            {
                min = a[i];
                min_index = i;
            }
            if (a[i] > max)
            {
                max = a[i];
                max_index = i;
            }
        }
    }

    if (min_index != -1 && max_index != -1)
    {
        temp = a[min_index];
        a[min_index] = a[max_index];
        a[max_index] = temp;
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

return 0;
}

