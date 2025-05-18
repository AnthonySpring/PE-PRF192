#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    int n;
	scanf("%d",&n);
	int sum =0 ;
	int i; 
	for(i=1; i<n ; i++){
		if(n % i ==0){
			sum = sum +i; 
			
		} 
	} 
    if(sum == n){
    	printf("%d is a perject number",n); 
	} 
	if( sum != n) {
	printf ("%d is not a perject number",n);
	} 
    
    
    
    
    
    
    
    printf("\n");
    system("pause");
    return(0);
}
