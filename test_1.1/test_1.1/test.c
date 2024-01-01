#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//6-9 统计个位数字
int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N, const int D)
{
    if (N == D)//当N与D相等时(此时N只有一位)，返回1（主要是处理N和D都为零时不进循环导致错误返回0的问题）
        return 1;
    int count = 0;
    int tmp;
    if (N >= 0)//用N的绝对值进行计算
        tmp = N;
    else
        tmp = -N;
    while (tmp)
    {
        if (tmp % 10 == D)
            count++;
        tmp /= 10;
    }
    return count;
}