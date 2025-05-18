// C2: Write a function that accepts two variables (by value) of the same data type of your choice (e.g. int or double) and tries to swap their values. Does your function work as you expected? Note that the function will not work if you pass the variables themselves. If your function does not work, modify it such that you pass it the addresses of the variables you wish to swap. Using this approach, you should be able to get it to work correctly.

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 7, y = 3;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap by value: x = %d, y = %d\n", x, y);

    return 0;
}
 
