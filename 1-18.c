#include <stdio.h>

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1;
    int result;
    for (int i = 2; i <= n; i=i+1) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int n = 10;
    int fibo_value = fibo(n);
    printf("%d項目のフィボナッチ数列の値は: %d\n", n, fibo_value);
    return 0;
}
