#include<stdio.h>
#include<math.h>

//bai 1a: Sap xep  cac phan tu o vi tri chan tang dan, phan tu o vi tri le giam dan
void nhap(int a[], int &n){
	printf("nhap n= ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}	
void Swap(int &x,int &y){//khi ra khoi ham nhan gia tri moi ref trong C++ con kh thi lam binh thuong
	int t;
	t=x;
	x=y;
	y=t;
}
void InterChange1(int a[], int n){//phan tu le giam dan
	int i,j,tmp;
	for (i=1;i<n;i+=2){
		for (j=i;j<=n-1;j+=2)//xet den phan tu cuoi cung
			if (a[j]>a[i]){
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
//				Swap(a[j],a[i]);
			}
	}
}
void InterChange2(int a[], int n){//phan tu chan tang dan
	int i,j,tmp;
	for (i=0;i<n;i+=2){
		for (j=i+2;j<=n-1;j+=2)//xet den phan tu cuoi cung
			if (a[j]<a[i]){
//				Swap(a[j],a[i]);
       			tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
		}
	}
}
void printArr(int a[], int n){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
//    printf("\n");
}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	InterChange1(a,n);
	InterChange2(a,n);
	printArr(a,n);
	return 0;
}

//bai1b. Sap xep cac phan tu  co gia tri chan tang dan,  gia tri le giam dan-

void nhap(int a[], int &n){
	printf("nhap n= ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}	
void Swap(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
}
void InterChange1(int a[], int n){//phan tu gia tri le giam dan
	int i,j;
	for (i=0;i<n;i++){
		for (j=i+1;j<=n-1;j++)//xet den phan tu cuoi cung
			if (a[j]>a[i])
			if (a[i]%2==1 && a[j]%2==1)
				Swap(a[j],a[i]);
	}
}
void InterChange2(int a[], int n){//phan tu gia tri chan tang dan
	int i,j;
	for (i=0;i<n;i++){
		for (j=i+1;j<=n-1;j++)//xet den phan tu cuoi cung
			if (a[j]<a[i])
			if (a[i]%2==0 && a[j]%2==0)
				Swap(a[j],a[i]);
	}
}
void printArr(int a[], int n){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	InterChange1(a,n);
	InterChange2(a,n);
	printArr(a,n);
	return 0;
}

//Nhap  n phan tu,  dung thuat toan interchange sap xep tang dan cac so floating point co 3 chu so thap phan, cach nhau boi dau �

void nhap(float a[], int &n){
	printf("nhap n= ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%f",&a[i]);
	}
}	
void Swap(float &x,float &y){
	float t;
	t=x;
	x=y;
	y=t;
}
void InterChange(float a[], int n){
	int i,j;
	for (i=0;i<n;i++){
		for (j=i+1;j<=n-1;j++)
			if (a[j]<a[i])
				Swap(a[j],a[i]);
	}
}
void printArr(float a[], int n){
    int i,j;
    int count=0;
    for (i=0; i < n; i++){
        printf("%.3f", a[i]);
    		for (j=i-1; j<i;j++){//bo dau - o cuoi
    			if (count== n-1){
    				break;
				}
				printf("-");
				count++;
			}
	}
}
    printf("\n");
int main(){
	float a[100];
	int n;
	nhap(a,n);
	InterChange(a,n);
	printArr(a,n);
}


bai3a. 3 so chan  cuoi cung trong mang theo trat tu tang dan

void nhap(int a[], int &n){
	printf("nhap n= ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}	
void Swap(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
}
void InterChange(int a[], int n){//phan tu gia tri chan tang dan
	int i,j;
	int count=0;
	int x=3;
	for (i=n-1;i>=0;i--){
		if (a[i]%2==0){//xet 2 so chan de doi cho 
			count++;
		}
		for (j=i-1;j>=0;j--){//xet 3 phan tu chan cuoi cung
			if ((a[j]%2==0)&&(a[i]%2==0)){
				x--;	
			}
			if (a[j]>a[i]){// vi xet nguoc lai tu n -> i nen doi cho so lon hon 
				if (a[i]%2==0 && a[j]%2==0){
					Swap(a[j],a[i]);
				}
			}
			if ((x==1) && (count==1))//xet 2 so chan tiep voi so chan dau tien 
				break;
			if ((x==0) && (count==2))//xet 1 so voi so chan thu 2
				break;
		}
		if (count == 2)//break vong lap i
		break;
	}
}
void printArr(int a[], int n){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	InterChange(a,n);
	printArr(a,n);
	return 0;
}

bai 3b. 3 so nguyen to cuoi cung trong mang theo trat tu tang dan

void nhap(int a[], int &n){
	printf("nhap n= ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}	
void Swap(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
}
int CheckPrime (int m){
	int i;
	if (m<=1) return 0;
	for (i=2;i*i<=m;i++){
		if (m%i==0) 
			return 0;
	}
	return 1;
}
void InterChange(int a[], int n){//phan tu gia tri ngto tang dan
	int i,j;
	int count=0;
	int x=3;
	for (i=n-1;i>=0;i--){
		if (CheckPrime(a[i])==1){//xet 2 so ngto de doi cho 
			count++;
		}
		for (j=i-1;j>=0;j--){//xet 3 phan tu gia tri ngto cuoi cung
			if (CheckPrime(a[j])){
			if (CheckPrime(a[i]))
				x--;	
			}
			if (a[j]>a[i]){// vi xet nguoc lai tu n -> i nen doi cho so lon hon 
				if ((CheckPrime(a[j])) && (CheckPrime(a[i]))){
					Swap(a[j],a[i]);
				}
			}
			if ((x==1) && (count==1))//xet 2 so nto tiep voi so chan dau tien 
				break;
			if ((x==0) && (count==2))//xet 1 so voi so nto thu 2
				break;
		}
		if (count == 2)//break vong lap i
		break;
	}
}
void printArr(int a[], int n){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	InterChange(a,n);
	printArr(a,n);
	return 0;
}
