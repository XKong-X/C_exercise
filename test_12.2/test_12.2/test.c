#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//金字塔图案
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        //控制行数
        for (int i = 1; i <= n; i++)
        {
            //打印空格
            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}