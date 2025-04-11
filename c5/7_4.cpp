#include <stdio.h>

int main() {
    int year, month, days;
    
    // 输入年份和月份
    scanf("%d%d", &year, &month);
    
    // 根据月份判断天数
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            // 判断是否为闰年
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
    }
    
    // 输出天数
    printf("%d\n", days);
    
    return 0;
} 