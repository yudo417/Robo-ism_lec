#include <stdio.h>

// 最大値を返す関数
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 10;
    int y = 5;

    // xとyのうち最大値を求める
    int maximum = max(x, y);
    printf("%dと%dのうち最大値は %d です。\n", x, y, maximum);

    int z = 15;
    int w = 20;

    // zとwのうち最大値を求める
    maximum = max(z, w);
    printf("%dと%dのうち最大値は %d です。\n", z, w, maximum);

    return 0;
}
