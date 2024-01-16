#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC172 牛牛的排列数
//int fun(int n, int tmp)
//{
//    if (n < tmp)
//        return 1;
//    else
//        return n * fun(n - 1, tmp);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int tmp = n - m + 1;
//    printf("%d", fun(n, tmp));
//    return 0;
//}
//
//BC173 牛牛逆序输出
void fun(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        return fun(n / 10);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}