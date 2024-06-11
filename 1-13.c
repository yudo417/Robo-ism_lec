#include <stdio.h>

int main() {
    int n = 5; // 例として5の階乗を計算
    int result = 1;

    for (int i = 1; i <= n; i=i+1) {
        result =result*i;
    }

    printf("%d の階乗は %d です。\n", n, result);

    return 0;
}
