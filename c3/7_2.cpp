#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("不能构成三角形\n");
        return 0;
    }
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("该三角形为等边三角形\n");
        } else if (a == b || b == c || a == c) {
            printf("该三角形为等腰三角形\n");
        } else {
            int sorted[] = {a, b, c};
            if (sorted[0] > sorted[1]) { int temp = sorted[0]; sorted[0] = sorted[1]; sorted[1] = temp; }
            if (sorted[1] > sorted[2]) { int temp = sorted[1]; sorted[1] = sorted[2]; sorted[2] = temp; }
            if (sorted[0] > sorted[1]) { int temp = sorted[0]; sorted[0] = sorted[1]; sorted[1] = temp; }
            
            if (sorted[0] * sorted[0] + sorted[1] * sorted[1] == sorted[2] * sorted[2]) {
                printf("该三角形为直角三角形\n");
            } else {
                printf("该三角形为任意三角形\n");
            }
        }
    } else {
        printf("不能构成三角形\n");
    }
    
    return 0;
}