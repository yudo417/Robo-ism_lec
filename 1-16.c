#include <stdio.h>

// 平均値を計算する関数
void heikin(int a, int b) {
    int heikin=(a+b)/2;
    printf("%d",heikin);
}

int main() {
    int x, y;
    x=10;
    y=6;    //xとyの値を10と6にしてみる
    heikin(x,y);
    

    return 0;
}
