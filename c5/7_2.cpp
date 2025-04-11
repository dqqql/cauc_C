#include <stdio.h>

int main() {
    int x;
    printf("input x(x<100):");
    scanf("%d", &x);
    
    // 计算平方数
    int square = x * x;
    
    // 获取平方数的最后几位数字
    // 如果x是个位数，我们只需要检查最后一位
    // 如果x是两位数，我们需要检查最后两位
    int lastDigits;
    if (x < 10) {
        lastDigits = square % 10;
    } else {
        lastDigits = square % 100;
    }
    
    // 判断是否是同构数
    if (lastDigits == x) {
        printf("%d是同构数", x);
    } else {
        printf("%d不是同构数", x);
    }
    
    return 0;
} 