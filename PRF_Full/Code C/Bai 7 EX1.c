#include <stdio.h>
int main() {
	int n,n1,n2,n3,n4,a, b;
	printf("nhap 2 so a va b: ");
	scanf("%d%d", &a, &b);
	n = a + b;
	printf("n =a + b : %d\n", n);
	n1 = ++a + b;
	printf("n1 =++a + b : %d\n", n1);
	a--;
	n2 = a++ + b;
    printf("n2 =a++ + b: %d\n", n2);
    a--;
    n3 = --a + b;
    printf("n3 =--a + b: %d\n", n3);
	a++;
	n4 = a-- + b;
    printf("n4 =a-- + b: %d\n", n4);
	return 0;
}
