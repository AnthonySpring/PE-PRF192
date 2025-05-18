#include <stdio.h>

int main()

{

  int ref[] = {1, 2, 4};

  int *ptr;

  int index;

 

  for (index = 0, ptr = ref; index < 3; index++, ptr++)

     printf("%d %d ", ref[index], *ptr);

  return 0;

}

 
