#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int cnt[1000001]={0};
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		cnt[a[i]]++;
}
	

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
    	if(cnt[a[i]]!=0&&a[i]%3==0){	
		printf("%d %d\n",a[i],cnt[a[i]]);//in ra cac ptu nhieu lan
	    cnt[a[i]]=0;
	}
}

  



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

