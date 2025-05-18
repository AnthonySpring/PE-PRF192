#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n, i, j,m;
    scanf("%d", &n);
    scanf("%d",&m); 
    int a[n][m], sum = 0;
    for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]); 
		}
	}
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if ((i + j) % 3 == 0) {
                sum += a[i][j];
            }
        }
    }
	printf("\nOUTPUT:\n");
	
    printf("%d", sum);

return 0;
}

