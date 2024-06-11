#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i=i+2) {
        sum =sum+i;
    }

    printf("1から100までの奇数の和は %d です。", sum);

    return 0;
}
