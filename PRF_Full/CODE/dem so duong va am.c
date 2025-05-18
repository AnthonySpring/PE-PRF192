#include<stdio.h>
int main() {
    int arr[50]; 
    int positive = 0;
    int negative = 0;
    int n;
	
    scanf("%d",&n);
	if(n<0 || n>10){
		return 1;
	}
    
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    printf("%d\n", positive);
    printf("%d\n", negative);
    
    return 0;
}
