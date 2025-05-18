/*Given two integer values a and b. Write a program that accepts 
a and b and swap the value of a and b. Then print the following
 line on the screen*/
 #include<stdio.h>
 	void doi_cho(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=4;
	int b=5;
	doi_cho(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
 	return 0;
 }
 
