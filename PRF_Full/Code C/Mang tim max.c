#include<stdio.h>
int maxValue(int n,int a[]){
	int i,max=a[0];
	for (i=0;i<n;i++){
	if  (a[i]>max){
           max=a[i];
}
}
return max;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	printf("Enter %d integers:\n", n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		
}
int max=maxValue(n,a);
printf("gia tri max la %d\n", max);
  return 0;
}
//int main() {                          
//    int i,n,a[n];
//    scanf("%d",&n);
//    for (i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//int max=a[0];
//    for (i=0;i<n;i++){
//        if (a[i]>max){
//            max=a[i];
//        }
//    }
// 
//  printf("%d", max);
//    return 0;
//}

