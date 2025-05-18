#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	    *a=*b;
	    *b=temp;
}
void selectionSort (int a[], int n){
	int i,j,min_idx;
	for (i=0;i<n-1;i++){
		min_idx=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
	swap(&a[min_idx],&a[i]);	
	}
}
int main(){
	int i,n;
	printf("nhap so lg ptu");
	scanf("%d",&n);
	int a[n];
	printf("nhap %d so nguyen:\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printf("mang sau khi sap xep la: ");
	for(i=0;i<n;i++){// in ra cac ptu cua mang
		printf("%d ",a[i]);
	}
	printf("\n");	
return 0;
}




//#include <stdio.h>
//// Hàm hoán d?i giá tr? c?a hai ph?n t?
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// Hàm s?p x?p ch?n
//void selectionSort(int arr[], int n) {
//    int i, j, min_idx;
//
//    // Di chuy?n ranh gi?i c?a m?ng dã s?p x?p
//    for (i = 0; i < n-1; i++) {
//        // Tìm ph?n t? nh? nh?t trong m?ng chua s?p x?p
//        min_idx = i;
//        for (j = i+1; j < n; j++) {
//            if (arr[j] < arr[min_idx]) {
//                min_idx = j;
//            }
//        }
//        // Hoán d?i ph?n t? nh? nh?t v?i ph?n t? d?u tiên
//        swap(&arr[min_idx], &arr[i]);
//    }
//}
//
//int main() {
//    int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    printf("Mang truoc khi sap xep: \n");
//    for (int i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//
//    selectionSort(arr, n);
//
//    printf("Mang sau khi sap xep: \n");
//    for (int i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//
//    return 0;
//}

