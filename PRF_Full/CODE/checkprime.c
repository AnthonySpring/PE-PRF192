#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n){
		int i,count=0;
		if(n<=1){
			return 0;
		}
		for(i=2;i*i<=n;i++){
			if(n%i==0){
				count++;
			} 
			}
			return count;
		}
	
int main(){
	int arr[100], n, i, j;
	double avgprime;
	int sum=0,count=0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
  if(isPrime){
  	sum+=i;
  	avgprime=(double)sum/count;
  }
	printf("%0.1lf",avgprime);
return 0;
}

