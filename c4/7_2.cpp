#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, originalNum, reverseNum = 0;

    scanf("%d", &num);

    // 忽略负号
    originalNum = abs(num);

    // 分离百位、十位和个位，并计算逆序数
    reverseNum += (originalNum % 10) * 100;  // 个位变百位
    reverseNum += ((originalNum / 10) % 10) * 10;  // 十位变十位
    reverseNum += originalNum / 100;  // 百位变个位

    // 输出逆序数
    printf("y=%d\n", reverseNum);

    return 0;
}