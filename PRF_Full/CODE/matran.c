#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void nhapmatran(int a[10][10],int row, int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			/*printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);*/
			a[i][j]=rand()%10;
		}
	}
}
void hienmatran(int a[10][10],int row, int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
int tinhtong(int a[10][10],int row, int col){
	//tinh tong cac so a[i][j] ma tran i+j chia het cho3
	int i,j,sum=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if((i+j)%3==0) sum+=a[i][j];
		}
	}
	return sum;
}
double tbcSoDuong(int a[10][10],int row, int col){
	int i,j,count=0,sum1=0;
	double tbc=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;i++){
			if(a[i][j]>0){
			count++;				
			sum1+=a[i][j];
			}
		}
	}
	if(count>0)
	 	tbc=(double)sum1/count;
	return tbc;
}
void chuyenvi(int a[10][10],int row, int col,int b[10][10]){
	int i,j;
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			b[i][j]=a[j][i];
		}
	}
}
int swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void hoandoirow(int a[10][10],int row, int col,int k,int j){
	int x,y;
	for(x=0;x<col;x++){
		swap(&a[k][x],&a[j][x]);
	}
}
int tongduongcheochinh(int a[10][10],int row, int col){
	int i,j,tong=0;
	for(i=0;i<row;i++){
		tong+=a[i][i];
	}
	return tong;
}
int tongduongcheophu(int a[10][10],int row, int col){
	int i,j,sum=0;
	for(i=0;i<col;i++){
		sum+=a[i][col-i];
	}
	return sum;
}
int main(){
	int i,j;
	int a[10][10];
	int row, col;
	int b[10][10];
	printf("\nNhap so dong:"); scanf("%d",&row);
	printf("\nNhap so cot:"); scanf("%d",&col);
	nhapmatran(a,row,col);
	hienmatran(a,row,col);
	/*int sum = tinhtong(a,row,col);
	double tbc = tbcSoDuong(a,row,col);
	hienmatran(a,row,col); 
	printf("\nTong = %d , TBC=%0.3lf",sum,tbc);
	chuyenvi(a,row,col,b);
	printf("\nMa tran chuyen vi la:\n");
	hienmatran(b,col,row);
	hoandoirow(a,row,col,0,2);
	printf("\nMa tran sao khi hoan doi la:\n");
	hienmatran(a,row,col);*/
	int tong=tongduongcheochinh(a,row,col);
	printf("\nTong duong cheo chinh=%d",tong);
//	hienmatran(a,row,col);
	int sum=tongduongcheophu(a,row,col);
	printf("\nTong duong cheo phu=%d",tong);
return 0;
}

