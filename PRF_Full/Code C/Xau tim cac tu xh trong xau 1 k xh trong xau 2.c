#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char c1[1000], c2[1000], a[100][100], b[100][100];
    
    printf("Enter the first string: ");
    fgets(c1, sizeof(c1), stdin);
    printf("Enter the second string: ");
    fgets(c2, sizeof(c2), stdin);
    
    // Tokenize first string
    int i,j,n = 0;
    char *token = strtok(c1, " \n");
    while(token != NULL) {
        strcpy(a[n++], token);
        token = strtok(NULL, " \n");
    }
    
    // Tokenize second string
    int m = 0;
    token = strtok(c2, " \n");
    while(token != NULL) {
        strcpy(b[m++], token);
        token = strtok(NULL, " \n");
    }
    
    // Sort array a
    qsort(a, n, sizeof(a[0]), cmp);
    
    // Print words in a that are not in b
    for( i = 0; i < n; i++) {
        if (i > 0 && strcmp(a[i], a[i - 1]) == 0) {
            continue; // Skip duplicates
        }
        int found = 0;
        for(j = 0; j < m; j++) {
            if(strcmp(a[i], b[j]) == 0) {
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("%s ", a[i]);
        }
    }
    
    return 0;
}

