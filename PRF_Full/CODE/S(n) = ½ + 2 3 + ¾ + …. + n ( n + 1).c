//B�i 7: T�nh S(n) = � + 2/3 + � + �. + n / n + 1

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0;
    i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    while(i <= n)
    {
        S = S + (float)i / (i + 1);
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}
