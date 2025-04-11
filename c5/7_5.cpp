#include <stdio.h>

int main() {
    char ch;
    
    // 输出提示信息
    printf("Input simple:\n");
    
    // 输入字符
    scanf("%c", &ch);
    
    // 判断字符类型
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It is an English character.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It is a digit character.\n");
    } else {
        printf("It is other character.\n");
    }
    
    return 0;
} 