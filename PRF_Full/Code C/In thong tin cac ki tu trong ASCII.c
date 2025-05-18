#include<stdio.h>
int main(){
int code;
printf("ASCII Code Table:\n");
for (code=0;code>=0 && code<=255;code++){
	printf ("%c:%d,%o,%X\n", code, code, code, code);//%c ki tu,%d thap phan,%o bat phan,%X thap luc phan
	// Pause every 20 lines, excluding the first line (code != 0)
	if (code != 0 && code % 20==0){
		printf("Press Enter to continue...");
		getchar();
	}
}
return 0;
}
