#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int n;
  	scanf("%d", &n);

  	int arr[n],i;
  	for ( i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  	}
 	int p;
  	scanf("%d", &p); 
  	for ( i = p - 1; i < n - 1; i++) {
    	arr[i] = arr[i + 1];
  	}

  	n--;
  	printf("\nOUTPUT:\n"); 
  	for ( i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  	}
	
return 0;
}

