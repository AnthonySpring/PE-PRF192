#include<stdio.h>
#include<math.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    int i;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
	int i,j,n,x=2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
				printf("%d ",x);
				while(!isPrime(++x));
		}
		printf("\n");
}
	
	return 0;
}


