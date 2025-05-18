//#include<stdio.h>
//#include<string.h>
//void cut(char *s, char *ho, char *ten) {    //ham:char * strcpy ( char * chuoi_dich, const char * chuoi_nguon);
//	//tim vi tri trang dau tien
//	char*space=strchr(s,' ');
//	if(space == NULL){
//		//neu k tim thay khoang trang,chi dinh ho la toan bo chuoi
//		strcpy(ho,s);
//		ten[0]='\0';//chuoi ten rong
//	}else{
//		//sao chep phan ho tu dau den vi tri trc khoang trang
//		strncpy(ho,s,space-s);//Cú pháp c?a hàm strncpy nhu sau:char *strncpy(char *destination, const char *source, size_t num);
//		ho[space-s]='\0';
//		//sao chep phan ten tu sau vi tri khoang trang
//		strcpy(ten,space+1);
//	}
//}
//int main(){
//	char s[100];
//	char ho[50];
//	char ten[50];
//	printf("nhap ho va ten:");
//	fgets(s, sizeof(s), stdin);
//	cut(s,ho,ten);
//	printf("Ho:%s\n",ho);
//	printf("Ten:%s\n",ten);
//	return 0;
//}
#include<string.h>
#include<stdio.h>
//void cut(char *s, char *ho, char *ten){
//	int i,n=strlen(s);
//	//tach ten
//	for(i=n-1;i>0;i--){
//		if(s[i]!=' '&&s[i-1]==' '){
//			strcpy(ten,s+i);//tro toi vi tri i trong chuoi s
//			ten[i]='\0';
//			puts(ten);
//			break;
//		}	
//	}
//	//tach ho
//	strcpy(ho,s);
//	ho[n-strlen(ten)-1]='\0';
//    puts(ho);	
//}
//int ktDoiXung(char *s){
//	int i;
//	for(i=0;i<=strlen(s)/2;i++){
//		if(s[i]!=s[strlen(s)-1-i]){
//			return 0;
//		}
//	}
//	return 1;
//}
void sapXep(){
	char danhSach[100][50];//danh sach 100 phan tu, moi phan tu co kich thuoc 50
	//nhap ds
	int i,j,n,min_idx;
	printf("So luong phan tu: ");
	scanf("%d",&n);
	getchar();//Lo?i b? ký t? newline còn l?i trong b? d?m d?u vào
	for(i=0;i<n;i++){
		puts("Nhap phan tu ");
		gets(danhSach[i]);
	}
	//in ds
	for(i=0;i<n;i++){
		printf("\nPhan tu thu %d: %s",i,danhSach[i]);
	}
	//sap xep sd Bubble Sort
	char temp[50];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(danhSach[i],danhSach[j])>0){
				strcpy(temp,danhSach[i]);
				strcpy(danhSach[i],danhSach[j]);
				strcpy(danhSach[j],temp);
			}
		}
	}
	//sd selection sort
//	char temp[50];
//	for (i=0;i<n-1;i++){
//		min_idx=i;
//		for(j=i+1;j<n;j++){
//			if(strcmp(danhSach[j],danhSach[min_idx])<0){
//				min_idx=j;
//		}
//	}
//	strcpy(temp, danhSach[min_idx]);
//    strcpy(danhSach[min_idx], danhSach[i]);
//    strcpy(danhSach[i], temp);
//}
	//in ds
	printf("\nSau khi sap xep: ");
	for(i=0;i<n;i++){
		printf("\nPhan tu thu %d: %s",i,danhSach[i]);
	    }
    }
int main(){
	//char s[100];
	//gets(s);
	sapXep();
//	char ho[100],ten[100];
//	cut(s,ho,ten);
//    if(ktDoiXung(s)==1){
//    puts("s doi xung");
//}else{
//	puts("s k dx");
//}
	return 0;
}

