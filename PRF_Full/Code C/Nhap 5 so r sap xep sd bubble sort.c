#include<stdio.h>
void sapXep(int a[]){//sd bubble sort
	int i,j;
	for (i=0;i<4;i++){
		for (j=i+1;j<5;j++){
			if(a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int i,n;
    int a[5];
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    
	}
    
    
    sapXep(a);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 0; i < 5; i++) {
	printf("%d",a[i]);
}
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}

