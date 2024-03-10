#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7-2 然后是几点
//int main()
//{
//    int start, change;
//    scanf("%d %d", &start, &change);
//    int m = start / 100 * 60 + start % 100 + change;
//    printf("%01d%02d", m / 60, m % 60);
//    return 0;
//}
//
//7-3 逆序的三位数
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;//默认结尾为零
    while (n)
    {
        if (n % 10 != 0)
            flag = 1;
        if (flag)//当出现第一个不为零的数时开始打印
            printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}