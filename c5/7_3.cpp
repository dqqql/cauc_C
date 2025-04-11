#include <stdio.h>

int main() {
    int score;
    char grade;
    
    // 输入百分制成绩
    scanf("%d", &score);
    
    // 使用if-else语句进行成绩转换
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    
    // 输出对应的五分制成绩
    printf("%c", grade);
    
    return 0;
} 