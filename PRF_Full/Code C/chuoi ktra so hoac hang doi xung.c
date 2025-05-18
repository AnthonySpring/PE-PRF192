
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int i;
int syn(int str[],int n){
	int left=0;
	int right=n-1;
	while(left<right){
		if(str[left]!=str[right]){
			return 0;
		}
		right--;
		left++;
		
	}
	return 1;
}
//
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//  int n;
//  int arr[1000];
//  scanf("%d",&n);
//  for(i=0;i<n;i++){
//  	scanf("%d",&arr[i]);
//}
//  int x=syn(arr,n);
//  
//  
//  
//  
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//printf("%d",x);
//
//
//
//
//
//
//
//  
//  
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}

#include <stdio.h>
#include <string.h>

// Hàm ki?m tra chu?i d?i x?ng
int kiem_tra_doi_xung(char chuoi[]) {
    int i = 0;
    int j = strlen(chuoi) - 1;

    // S? d?ng vòng l?p while d? so sánh các ký t? t? hai phía
    while (i < j) {
        if (chuoi[i] != chuoi[j]) {
            return 0; // Tr? v? 0 n?u không d?i x?ng
        }
        i++;
        j--;
    }
    return 1; // Tr? v? 1 n?u d?i x?ng
}

int main() {
    char chuoi[100];

    // Nh?p chu?i t? ngu?i dùng
    printf("Nhap chuoi: ");
    scanf("%s", chuoi);

    // Ki?m tra chu?i d?i x?ng và in k?t qu?
    if (kiem_tra_doi_xung(chuoi)) {
        printf("Chuoi la chuoi doi xung.\n");
    } else {
        printf("Chuoi khong phai la chuoi doi xung.\n");
    }

    return 0;
}

