#include<stdio.h>
int main(){
	double result,num1,num2;
	char op;
	printf("nhap num1,op,num2=");
	scanf("%lf%c%lf ",&num1,&op,&num2);
    switch (op){
        case '+': result=num1 + num2;	
	        break;
        case '-': result=num1 - num2;	
	        break;
        case '*': result=num1 * num2;
	        break;
        case '/':
	if (num2 == 0){
		printf("divide by 0");
	}else{
		result=num1 / num2;
	break;
    }
    default:
    printf("\nop is not supported");			
	} 
	printf("result=%lf",result);
	return 0;	
		
}
