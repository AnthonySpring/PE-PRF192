#include <stdio.h>

void findPair(int arr[], int n, int sum) {
    int i,j;

    for ( i = 0; i < n ; i++) {
       
        for (j = 1; j < n; j++) {
            return
            if (arr[i] + arr[j] == sum) {
                printf("%d\n%d\n", arr[i], arr[j]);
                return;
            }
        }
    }
    
}

int main() {
    int n,i;
    scanf("%d", &n);

    int arr[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum;
    scanf("%d", &sum);

    // Call the function to find the pair with the given sum
    findPair(arr, n, sum);

    return 0;
}
