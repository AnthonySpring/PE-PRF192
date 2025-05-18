//#include<stdio.h>
//#include<math.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int max1=a[0],max2=a[0];
//	for(i=0;i<n;i++){
//		if(a[i]>max1){//<= in index chi so sau
//			max2=max1;
//			max1=a[i];
//		}
//		else if(a[i]>max2 && a[i]!=max1){//muon 2 so trung nhau thi bo && a[i]!=max1)
//			max2=a[i]; 
//		}
//}
//	for(i=0;i<n;i++){
//		if(a[i]<max2){
//		 printf("%d\n",a[i]);
//		 } 
//	}
//	printf("%d\n",max1);
//	printf("%d",max2);
//}

#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res=a[0],raze=a[0],idx=0,adx=0;
	for(i=0;i<n;i++){
		if(a[i]<res){//<= in index chi so sau
			res=a[i];
			idx=i;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>raze){
			raze=a[i];
			adx=i;
		}
	}
	printf("%d\n",idx);
	printf("%d",adx);
}


