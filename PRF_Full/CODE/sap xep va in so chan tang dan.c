#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
int n=6;
int a[n];
int i;
for (i=0;i<n;i++){
	scanf("%d",&a[i]);
	
}



    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    int j;
    int temp;
for (i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

for (i=0;i<n;i++){
	if(a[i]%2==0){
		printf("%d\n",a[i]);

	}
}

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
