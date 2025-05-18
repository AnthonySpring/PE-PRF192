#include<stdio.h>
int main(){
int n,n2;
scanf("%d",&n);
int dvi,chuc,tram,tong;
//c1
tram=n/100;
chuc=(n-tram*100)/10;
dvi=n-tram*100-chuc*10;
//c2
tram=n/100;
chuc=(n%100)/10;
dvi=n%10;
//dxung
n2=tram+chuc*10+dvi*100;
tong=tram+chuc+dvi;
printf("tong la %d",tong);
printf("\n %d",n2);
return 0;
}
