#include <stdio.h>


void myFunction(int a, int b) {
    
    int sum = a + b;
    printf("Sum: %d\n", sum);

    
    printf("Other operations in myFunction.\n");
}

int main() {
    int a = -3;
    int b = 8;

    
    if (a < 0 || b < 0) {
        printf("Invalid input, skipping myFunction.\n");
    } else {
        myFunction(a, b);
    }

    return 0;
}
