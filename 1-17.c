#include <stdio.h>

int sum_cal(int n) {
    int total = 0;
    for (int i = 1; i <= n; i=i+1) {
        total =total+ i;
    }
    return total;
}

int main() {
    int n = 10;
    int result = sum_cal(n);
    printf("和は: %d\n",  result);
    return 0;
}
