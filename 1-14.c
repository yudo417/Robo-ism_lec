#include <stdio.h>

// 四則計算を行う関数
void keisan(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
    } else {
        printf("%d / %d = Division by zero error\n", a, b);
    }
}

int main() {
    int x = 10;
    int y = 5;
    int z=6;
    int w=3;

    keisan(x, y);
    keisan(z,w);

    return 0;
}
