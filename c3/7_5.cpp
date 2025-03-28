#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf", &x);
    
    if (x < 0) {
        y = x * x + x - 6;
    } else if (x < 5) {  // 隐含条件 x >= 0
        y = x * x - 5 * x;
    } else {
        y = x * x * x - 1;
    }
    
    printf("y=%f\n", y);
    return 0;
}