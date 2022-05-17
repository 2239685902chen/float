#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float q = 0;
    scanf("%f", &q);
    printf("%.3f\n", q);//%.3f表示保留三位小数，末位自动四舍五入
    return 0;
}