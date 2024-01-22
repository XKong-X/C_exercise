#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7-21 求特殊方程的正整数解
int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    for (int x = 1; x <= 100; x++)//因为当x等于y时，x等于10倍根号10（31.622）
    {
        for (int y = x; y <= 100; y++)
        {
            if (x * x + y * y == n)
            {
                printf("%d %d\n", x, y);
                flag = 0;
            }
        }
    }
    if (flag)
        printf("No Solution");
    return 0;
}