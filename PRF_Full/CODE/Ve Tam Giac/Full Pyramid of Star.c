// Full Pyramid of *

#include <stdio.h>
int main() {
   int i, space, rows, h = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, h = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (h != 2 * i - 1) {
         printf("* ");
         ++h;
      }
      printf("\n");
   }
   return 0;
}
