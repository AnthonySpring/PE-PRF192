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
	printf("\nOUTPUT:");
	printf("\n");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
void CountElements(int a[],int n){
	int mask[n];
	int i,j,count;
	for(i=0;i<n;i++) mask[i]=0;
	for(i=0;i<n;i++){
		if(mask[i]==0){
			count=1;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count++;
					mask[j]=1;
				}
			}
			printf("\n%d-%d",a[i],count);
		}
	}
}
 void CountMaxElements(int a[],int n ){
	//vi du mang A: 1 2 3 2 4  3 1 6 5 4 
	// 1-2 ; 2 - 2; 3 2; 4 - 2 ; 5 -1 ; 6 -1
	int mask[n];
	int i,j,count,max=1;
	for (i=0;i<n;i++) mask[i]=0;
	for (i=0;i<n;i++){
		if (mask[i]==0){
			count=1;
			for (j=i+1;j<n;j++){
				if (a[i]==a[j]){
					count++;
					mask[j]=1;
				}
			}
			//printf("\n%d - %d",a[i],count);
			if (count>max){
				max=count;				
			}
		}
	}
	
//	\\lay cac gia tri co count = max
for (i=0;i<n;i++) mask[i]=0;
for (i=0;i<n;i++){
		if (mask[i]==0){
			count=1;
			for (j=i+1;j<n;j++){
				if (a[i]==a[j]){
					count++;
					mask[j]=1;
				}
			}
			//printf("\n%d - %d",a[i],count);
			if (count==max){
				printf("\n%d - %d",a[i],count);
				 			
			}
		}
	}
	
	
}
int main(){
	int a[50];
	int n=6;
	nhapmang(a,n);
	hienmang(a,n);
	CountElements(a,n);
	printf("\n");
	CountMaxElements(a,n);
	

return 0;
}

