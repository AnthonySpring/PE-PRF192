#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
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
	printf("\nOUTPUT:\n"); 
    printf("Tong chu so: %d\n", countdigit);
    printf("Tong chu HOA:%d\n", countupper);
    printf("Tong chu thuong: %d\n", countlower);
    printf("Tong cac ki tu khac: %d\n", countother);

return 0;
}

