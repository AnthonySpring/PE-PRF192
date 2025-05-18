#include<stdio.h>
int main(){
	const double pa = 9000000;  
    const double pd = 3600000;  
	double a,tf,ti,income_tax;
	printf("your income of this year");
	int n;
	printf(" and Number of dependent:");
	scanf("%lf%d",&a,&n);
	tf = 12 * (pa + n * pd);
	ti= a - tf; 
	if (ti<=0){
		printf("Taxable income=0");    
}else{
	printf("Tax-free income=%lf",tf);
	printf("\nTaxable income=%lf",ti);
}
if (ti <= 0) {
        income_tax = 0;
    } else {
        if (ti <= 5000000) {
            income_tax = ti * 0.05;
        } else if (ti <= 10000000) {
            income_tax = 5000000 * 0.05 + (ti - 5000000) * 0.1;
        } else if (ti <= 18000000) {
            income_tax = 5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000) * 0.15;
        } else {
            income_tax = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2;
        }
    }
	printf("\nincome tax=%lf",income_tax);
	return 0;
}
