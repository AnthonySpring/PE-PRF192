#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int count[255]={0};
	int n;
	scanf("%d",&n);
	getchar();
	char s[n];
	int i;
	
	for(i=0;i<n;i++){
		scanf("%c",&s[i]);
		getchar();
		++count[s[i]];	
	} 
	
	int max=0, max2 = 0;
	for(i=0; i<n; i++){
	 	if(count[s[i]] > max){
	 		max = count [s[i]];
		}
	}
	for(i=0; i<n; i++){
		if(count [s[i]]==max){
			continue;
		}else if(max2 < count [s[i]]){
			max2 = count[s[i]];
		}
	}
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
int dem=0;
	for(i=0; i<n; i++){
		if(count[s[i]]== max){
			printf("%c", s[i]);
			++dem;
			count [s[i]] = 0;
		}
	}
	
	if(dem <2){
		for(i=0; i<n; i++){
			if(count[s[i]]==max2){
				printf("%c\n", s[i]);
				break;
			}
		}
	}


    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
