#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
int n;
scanf("%d", &n);
int sum = 0, product = 1;
while (n > 0) {
int digit = n % 10;
sum += digit;
product *= digit;
n /= 10;
}
printf("\n");
printf("\nOUTPUT:");
if (sum == product) {
printf("\nYes");
} else {
printf("\nNo");
}

return 0;
}

