#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	char str[100];
    int i,countdigit=0,countupper=0,countlower=0,countother=0;
    fgets(str,sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (i= 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            countdigit++;
        } else if (isupper(str[i])) {
            countupper++;
        } else if (islower(str[i])) {
            countlower++;
        } else {
            countother++;
        }
    }
    int count=countdigit+countother;
	printf("\nOUTPUT:\n"); 
    
    printf("%d", count);


return 0;
}

