#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//变种水仙花
int main()
{
    for (int i = 10000; i <= 99999; i++)//生成所有五位数
    {
        int sum = 0;
        int k = 10;
        while (i / k)
        {
            sum += (i / k) * (i % k);//不要用库函数，会超时
            k *= 10;
        }
        if (sum == i)//相等则打印
            printf("%d ", i);
    }
    return 0;
}