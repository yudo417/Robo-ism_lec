#include <stdio.h>

int main() {
    // 変数の宣言と初期化
    int a = 10;
    int b = 5;
    int sum, difference, product, quotient;

    // 四則演算
    sum = a + b;          // 加算
    difference = a - b;   // 減算
    product = a * b;      // 乗算
    quotient = a / b;     // 除算

    // 結果の表示
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %d\n", quotient);

    return 0;
}
