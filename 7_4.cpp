#include<stdio.h>
 
int main()
{
    float F,C,Y,x;
    int n = 0;
    char a = 0;
    printf("请输入F舱、C舱和Y舱的公布价\n");
    scanf("%f%f%f",&F,&C,&Y);
    printf("请输入舱位代码和购票数量\n");
    scanf(" %c%d",&a,&n);
    switch(a)
    {
        case 'F':
            {
                x = F*n;
                break;
            }
        case 'C':
            {
                x = C*n;
                break;
            }
        case 'Y':
            {
                x = Y*n;
                break;
            }
        case 'B':
            {
                x = Y*0.9*n;
                break;
            }
        case 'H':
            {
                x = Y*0.85*n;
                break;
            }
        case 'L':
            {
                x = Y*0.75*n;
                break;
            }
        case 'M':
            {
                x = Y*0.7*n;
                break;
            }
        case 'N':
            {
                x = Y*0.65*n;
                break;
            }
        case 'Q':
            {
                x = Y*0.6*n;
                break;
            }
        case 'T':
            {
                x = Y*0.55*n;
                break;
            }
        case 'X':
            {
                x = Y*0.5*n;
                break;
            }
    }
    printf("机票款总额为%.0f",x);
    return 0;
}