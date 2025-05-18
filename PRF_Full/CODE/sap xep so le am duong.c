#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void bublesort(int arr[], int n){
	int i, j, tmp;
	for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if(arr[j]>arr[i]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}
int main(){
	int arr[100], n, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOUTPUT:\n");
    bublesort(arr,n);

   
    for (i = 0; i < n; i++){
    	//if(arr[i]%2==1 || arr[i]%2==-1)
        	printf("%d ", arr[i]);
    }
	

return 0;
}

