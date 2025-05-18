#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void capitalize_sentence(char *sentence) {
	int i;
	for (i = 0; i < strlen(sentence); i++) {
		if (i == 0 || sentence[i - 1] == ' ') {
			sentence[i] = toupper(sentence[i]);
		}
	}
}
int main(){
	char sentence[200];
	fgets(sentence, sizeof(sentence), stdin);
	capitalize_sentence(sentence);
	//printf("\n");
	printf("\nOUTPUT:");
	printf("\n%s", sentence);

return 0;
}

