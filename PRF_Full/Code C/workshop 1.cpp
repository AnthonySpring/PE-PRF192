#include <stdio.h>
int n;
double x;
char cl;
int main () 
{	int m;
 	short s;
 	long L;
 	float y;
 	printf("Code of main:%u\n", &main);
	printf("Variable n, add:%u, memory size:%d\n", &n, sizeof(n));
	printf("Variable m, add:%u, memory size:%d\n", &n, sizeof(m));
	printf("Variable s, add:%u, memory size:%d\n", &n, sizeof(s));
	printf("Variable L, add:%u, memory size:%d\n", &n, sizeof(L));
	printf("Variable y, add:%u, memory size:%d\n", &n, sizeof(y));
	printf("Variable x, add:%u, memory size:%d\n", &n, sizeof(x));
	printf("Variable cl, add:%u, memory size:%d\n", &n, sizeof(cl));
	getchar();
	return 0;
}


