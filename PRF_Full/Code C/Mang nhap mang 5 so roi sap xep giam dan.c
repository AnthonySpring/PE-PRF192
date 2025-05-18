#include<stdio.h>
void sapXep(double a[],int n){//sd bubble sort
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(a[i]<a[j]){
				double tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
		}
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	double a[n];
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	sapXep(a,n);
	for(i=0;i<n;i++){
		if(i!=n-1){
	    	printf("%.3lf-",a[i]);	
} 
else{
	    	printf("%.3lf",a[i]);
}
}
}
