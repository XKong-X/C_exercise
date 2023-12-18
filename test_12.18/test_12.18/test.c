#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//6-1 简单输出整数
void PrintN(int N);

int main()
{
    int N;

    scanf("%d", &N);
    PrintN(N);

    return 0;
}

/* 你的代码将被嵌在这里 */
void PrintN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
}