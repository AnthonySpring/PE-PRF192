#include<string.h>
#include<stdio.h>
void dem(char s[]){
	int i,n=strlen(s),ngAm = 0,phuAm = 0,inHoa = 0,inThuong=0;
	char s1[100];
	strcpy(s1,s);//copy s vao s1
	strupr(s1);//doi in hoa
	for(i=0;i<n;i++){
		if(s1[i]>='A'&&s1[i]<='Z'){
			if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
				ngAm++;
			}else{
				phuAm++;
			}
		}
		if(s[i]>='A'&&s[i]<='Z'){
			inHoa++;
		}else if(s[i]>='a'&&s[i]<='z'){
			inThuong++;
		}
	}
	printf("So luong nguyen am: %d, phu am: %d",ngAm,phuAm);
	printf("\nSo ky tu in hoa %d, in thuong %d\n",inHoa,inThuong);
	
}
//bai 4: dem tu
int demTu(char *s){
	int i, count=0;
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			count++;
		}
	}
	if(s[0]!=' ')count++;
	return count;
}
//c2 dem tu sd strtok
int demTu2(char *s){
	char s1[100];
	strcpy(s1,s);
	int count = 0;
	char *word = strtok(s1," ");
	while(word != NULL){
	//	puts(word);
		count++;
		word = strtok(NULL, " ");
	}
	return count;
}
//
void chuanHoa(char *s){
	int i;
	strlwr(s);
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			s[i+1]= toupper(s[i+1]);
//			if(s[i+1]>='a'&&s[i+1]<='z'){
//				s[i+1] -= 32;
//			}
		}
	}
	if(s[0]!= ' ')s[0] = toupper(s[0]);
	//xoa dau cach du thua
	//xoa dau cach o dau
	i=0;
	while(s[i]==' ')i++;
	strncpy(s,s+i,strlen(s)-i);
	s[strlen(s)-i]='\0';//danh dau ky tu ket thuc chuoi
	//xoa dau cach o cuoi
	printf("\nDo dai: %d",strlen(s));
	i=strlen(s)-1;
	while(s[i]==' ')i--;
	s[i+1]='\0';
	printf("\nDo dai: %d\n",strlen(s));
	//xoa dau cach o giua
	char s1[100],kq[100];
	strcpy(s1,s);
	char *token = strtok(s1," ");
	while(token != NULL){
		strcat(kq,token);
		strcat(kq," ");
		token = strtok(NULL," ");
	}
	strcpy(s,kq);
	puts(s);	
}
//bai 6: tach ho ten
void cut(char *s, char *ho, char *ten){
	int i,n=strlen(s);
	//tach ten
	for(i=n-1;i>0;i--){
		if(s[i]!=' '&&s[i-1]==' '){
			strcpy(ten,s+i);
			ten[i]='\0';
		//	puts(ten);
			break;
		}	
	}
	//tach ho
	strcpy(ho,s);
	ho[n-strlen(ten)-1]='\0';
//	puts(ho);	
}
//bai 7: kiem tra doi xung
int ktDoiXung(char *s){
	int i;
	for(i=0;i<=strlen(s)/2;i++){
		if(s[i]!=s[strlen(s)-1-i]){
			return 0;
		}
	}
	return 1;
}
//bai 16
void sapXep(){
	char danhSach[100][50];//danh sach 100 phan tu, moi phan tu co kich thuoc 50
	//nhap ds
	int i,j,n;
	printf("So luong phan tu: ");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		puts("Nhap phan tu ");
		gets(danhSach[i]);
	}
	//in ds
	for(i=0;i<n;i++){
		printf("\nPhan tu thu %d: %s",i,danhSach[i]);
	}
	//sap xep
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
	//in ds
	printf("\nSau khi sap xep: ");
	for(i=0;i<n;i++){
		printf("\nPhan tu thu %d: %s",i,danhSach[i]);
	}
}
int main(){
	char s[100];
	gets(s);
	dem(s);
	printf("\nSo tu la %d\n",demTu2(s));
	chuanHoa(s);
	puts(s);
	char ho[100],ten[100];
	cut(s,ho,ten);
	//tach 5 ky tu tu s va luu s1
	char s1[6];
	strncpy(s1,s+strlen(s)/2 - 3, 5);
	if(ktDoiXung(s1)==1)puts("s1 doi xung");
	else puts("s1 khong doi xung");
	puts(s1);
	sapXep();	
	
	return 0;
}
