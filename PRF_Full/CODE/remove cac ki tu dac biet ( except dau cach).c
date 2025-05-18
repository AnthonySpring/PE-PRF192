#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
  	char s[100];
  	gets(s);
	int i; 
  	// Remove all non-alphabet characters (except spaces)
  	for ( i = 0; i < strlen(s); i++) {
    	if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i]==' ')) {
      	memmove(&s[i], &s[i + 1], strlen(s) - i);
      	i--;
    	}
  	}
	printf("\nOUTPUT:\n"); 
  	printf("%s",s);

return 0;
}

