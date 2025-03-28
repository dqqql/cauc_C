#include <stdio.h>

int main() {
    int math1, english, math2;
    float final_score;

    // 提示用户输入成绩
    printf("Input math1, English and math2:\n");
    scanf("%d,%d,%d", &math1, &english, &math2);

    // 计算学分绩
    final_score = (math1 * 5 + english * 1.5 + math2 * 3.5) / 10;

    // 输出结果
    printf("Final score = %.2f\n", final_score);

    return 0;
}