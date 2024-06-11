#include <stdio.h>

int main() {
    // 新しい値を設定
    int a = 5;  
    int b = 3; 
    int result;

    if (a > 0) {
        result = a - b;
    } else {
        result = a + b;
    }

    printf("条件に基づく結果: %d\n", result);

    return 0;
}
