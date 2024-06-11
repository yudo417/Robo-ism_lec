#include <stdio.h>

int main() {
    // 変数の宣言
    int a = 1;
    int b = 2;
    int c = 3;

    // 計算
    int result1 = a + b + c;
    int result2 = a * b + c;
    int result3 = b * c / a; // 整数を浮動小数点数にキャストして計算
    int result4 = a - c + b;

    // 結果の表示
    printf("a + b + c = %d\n", result1);
    printf("a * b + c = %d\n", result2);
    printf("b * c / a = %d\n", result3);
    printf("a - c + b = %d\n", result4);

    return 0;
}
