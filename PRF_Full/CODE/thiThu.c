#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int checkSymmetric(int *a, int n){
	int i;
	for(i=0; i<n/2; i++)
		if(a[i]!=a[n-i-1])
			return 0;
	return 1;
}

int checkPalindrome(char s[]){
	int i, n=strlen(s);
	for(i=0; i<n/2; i++)
		if(s[i]!=s[n-i-1])
			return 0;
	return 1;
}


void intBubbleSort(int *a, int n){
	int i, j, t;
	for(i=0; i<n; i++){
		for(j=n-1; j>i; j--)
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
}

void charBubbleSort(char s[], int n){
	int i, j;
	char t;
	for(i=0; i<n; i++){
		for(j=n-1; j>i; j--)
			if(s[j]<s[j-1]){
				t=s[j];
				s[j]=s[j-1];
				s[j-1]=t;
			}
	}
}

void stringSwapping(char *s1, char *s2){
	//char *temp = (char *)calloc((strlen(s1) + 1), sizeof(char));
	char *temp = (char *)malloc((strlen(s1) + 1) * sizeof(char));
	strcpy(temp, s1);
	strcpy(s1, s2);
	strcpy(s2, temp);
	free(temp);
}

void stringBubbleSort(char s[][256], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(strcmp(s[j], s[j-1])<0)
				stringSwapping(s[j], s[j-1]);
	}
}

int main(){
	/*
	// Q2
	int n, cnt=0, Sum3LastEvenNums=0;
	scanf("%d", &n);
	if(n<0) 
		exit(0);
	if(n<=3) 
		printf("n invalid, n must be > 3!");
	else{
		while(cnt<3){
			if(n%2==0){
				Sum3LastEvenNums+=n;
				++cnt;
			}
			n--;
		}
		printf("\nOUTPUT:\n");
		printf("Sum 3 Last Even Numbers = %d", Sum3LastEvenNums);
	}
	*/
	
	
	// Q3
	/*int i, n=4;
	char s[n];
	for(i=0; i<n; i++){
		fflush(stdin);
		scanf("%c", &s[i]);
	}
	charBubbleSort(s, 4);
	printf("\nOUTPUT:\n");
	for(i=0; i<4; i++)
		printf("%c ", s[i]);
	*/
	
	
	// Q4
	/*int i, n=7, *a;
	a=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	intBubbleSort(a, n);
	printf("\nOUTPUT:\n");
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	free(a);*/
	
	
	//Q5
	/*int i, n, *a;
	printf("n = ");
	scanf("%d", &n);
	assert(n>0 && n<20);
	a=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nOUTPUT:\n");
	printf("%d", checkSymmetric(a, n));
	free(a);*/
	
	
	
	// Q6
	/*	
	int i, n=5;
	char s[n][256];
	for(i=0; i<n; i++){
		fflush(stdin);
		gets(s[i]);
	}
	stringBubbleSort(s, n);
	printf("\nOUTPUT:\n");
	for(i=0; i<n; i++) 
		printf("%s ", s[i]);
	printf("\n");*/
	
	
	
	// Q7
	int i, length, center;
	char s[21];
	fflush(stdin);
	gets(s);
	length=strlen(s);
	if((length>=5) && (length%2==1)){
		printf("\nOUTPUT:\n");
		center=length/2;
		for(i=center-2; i<=center+2; i++)
			printf("%c", s[i]);
		printf("\n");
	}
	
	// Check string Palindrome
	/*int i;
	char s[n];
	fflush(stdin);
	gets(s);
	printf("\nOUTPUT:\n");
	if(checkPalindrome(s))	
		printf("1");
	else
		printf("0");
	*/
	/*int i, j, n, rows, count=0;
	printf("Enter n: ");
	scanf("%d", &n);
	char S[n][256];
	char t[256];
	char c='A';
	//t[0]=(char) c;
	strcpy(S[0], 'A');
	for(i=1; i<n;i++){
		strcpy(S[i], S[i-1]);
		strcat(S[i], 'A'+i);
	}
	for(i=1; i<n;i++){
		puts(S[i]);
	}
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
	for (i = 0; i < 2*rows; i=i+2) {
        for (j = 0; j <= i; j++) {
       	    printf("%c", 'A'+count);
           	if(j < i/2)
               	count++;
           	else
               	count--;
       	}
    	count = 0;
        printf("\n");
    }*/
	/*for(i=1; i<=N; i++){   
		for(j=1; j<=i; j++){
			printf("%c", c);
			c++;
		}
     printf("\n");
 	}
	*/


	getchar();
	return 0;
}
