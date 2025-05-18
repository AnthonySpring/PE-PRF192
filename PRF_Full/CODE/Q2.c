#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
		//a[i]=rand()%30;
	}
}
void hienmang (int a[],int n){
	int i;
	printf("\n");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
void swapLargestSmallest(int a[], int n) {
	int i;
    int largest = a[0], smallest = a[0];
    int vtlargest = 0, vtsmallest = 0;
 	for( i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
            vtlargest = i;
        }
        if(a[i] < smallest) {
            smallest = a[i];
            vtsmallest = i;
        }
    }
    int temp = a[vtlargest];
    a[vtlargest] = a[n-1];
    a[n-1] = temp;
    temp = a[vtsmallest];
    a[vtsmallest] = a[0];
    a[0] = temp;
    hienmang(a, n);
}
int main(){
	int a[50],n;
	printf("Enter N = ");
	scanf("%d",&n);
	nhapmang(a,n);
	printf("\nMang vua nhap la:");
	hienmang(a,n);
	printf("\nOUTPUT:");
	printf("\nMang sau khi doi cho la:");
	swapLargestSmallest(a,n);

return 0;
}

