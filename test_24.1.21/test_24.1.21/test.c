#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7-11 分段计算居民水费
int main()
{
    int x;
    scanf("%d", &x);
    if (x <= 15)
        printf("%.2f", 4.0 * x / 3.0);
    else
        printf("%.2f", 2.5 * x - 17.5);
    return 0;
}
