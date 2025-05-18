#include<stdio.h>
void sapXep(float a[]){//sd bubble sort
	int i,j;
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if(a[i]<a[j]){
				float tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
		}
	}
}
int main(){
	int i;
	float a[4];
	for(i=0;i<4;i++){
		scanf("%f",&a[i]);
	}
	sapXep(a);
	for(i=0;i<4;i++){
		printf("%.2f ",a[i]);
	}
	return 0;
}



