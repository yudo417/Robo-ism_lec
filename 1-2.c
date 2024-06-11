#include <stdio.h>


void myFunction(int a, int b) {
    
    if (a < 0 || b < 0) {
        printf("Invalid input, exiting myFunction.\n");
        return; 
    }

    
    int sum = a + b;
    printf("Sum: %d\n", sum);

    
    printf("Other operations in myFunction.\n");
}

int main() {

    myFunction(5, 10);  
    myFunction(-3, 8);  

    return 0;
}
