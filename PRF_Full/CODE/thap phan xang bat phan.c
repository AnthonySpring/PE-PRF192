//thap phan xang bat phan 

#include <stdio.h>
#include <math.h>
 
int DecToOct(int number){
    int p = 0;
    int octNumber = 0;
    while(number > 0){
        octNumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octNumber;
}
 
 
int main(){
    int decimalNumber;
    printf("\nNhap so o co so 10: ");
    scanf("%d", &decimalNumber);
 
    printf("\nOct = %d", DecToOct(decimalNumber));
 
}


//nguoc lai 


#include <stdio.h>
#include <math.h>
 
int Oct2Dec(int number){
    int p = 0;
    int decNumber = 0;
    while(number > 0){
        decNumber += (number % 10) * pow(8, p);
        p++;
        number /= 10;
    }
    return decNumber;
}
 
int main(){
    int octNumber;
    printf("\nNhap so o co so 8: ");
    scanf("%d", &octNumber);
 
    printf("\nDec = %d", Oct2Dec(octNumber));
}
