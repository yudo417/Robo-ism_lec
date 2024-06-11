#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i=i+1) {
        sum =sum+i;
    }

    printf("1から100までの和は %d です。", sum);

    return 0;
}
