#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	char c[100];
	int i,count=0;
	for(i=0;i<10;i++){
		scanf("%c",&c[i]);
	}
	for(i=0;i<10;i++){
		if(c[i]=='a' || c[i]=='A') 
		count++;
	}
	printf("Trong mang co %d ki tu a",count);
	

return 0;
}

