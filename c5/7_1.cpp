#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    bool flag = 1;
    printf("input x:");
    scanf("%d",&n);
    if (n % 2 == 0) flag = 0;
    if (flag) printf("%d是奇数", n);
    else printf("%d是偶数\n",n);
    return 0;
}