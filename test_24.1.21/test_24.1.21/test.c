#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7-11 分段计算居民水费
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    if (x <= 15)
//        printf("%.2f", 4.0 * x / 3.0);
//    else
//        printf("%.2f", 2.5 * x - 17.5);
//    return 0;
//}
//
////7-12 两个数的简单计算器
//int main()
//{
//    int num1, num2;
//    char sign;
//    scanf("%d %c %d", &num1, &sign, &num2);
//    if (sign == '+')
//        printf("%d", num1 + num2);
//    else if (sign == '-')
//        printf("%d", num1 - num2);
//    else if (sign == '*')
//        printf("%d", num1 * num2);
//    else if (sign == '/')
//        printf("%d", num1 / num2);
//    else if (sign == '%')
//        printf("%d", num1 % num2);
//    else
//        printf("ERROR");
//    return 0;
//}
//
////7-13 日K蜡烛图
//int main()
//{
//    double O, H, L, C;
//    scanf("%lf %lf %lf %lf", &O, &H, &L, &C);
//    //蜡烛类型
//    if (C < O)
//        printf("%s", "BW-Solid");
//    else if (C > O)
//        printf("%s", "R-Hollow");
//    else
//        printf("%s", "R-Cross");
//    //影线
//    if (L<O && L<C && H>O && H>C)
//        printf("%s", " with Lower Shadow and Upper Shadow");
//    else if (L < O && L < C)
//        printf("%s", " with Lower Shadow");
//    else if (H > O && H > C)
//        printf("%s", " with Upper Shadow");
//    return 0;
//}
//
////7-14 求整数段和
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = 0;
//    int count = 0;
//    for (int i = a; i <= b; i++)
//    {
//        printf("%5d", i);
//        sum += i;
//        count++;
//        if ((count != 0 && count % 5 == 0) || i == b)
//            printf("\n");
//    }
//    printf("Sum = %d", sum);
//    return 0;
//}
//
////7-15 计算圆周率
//int main()
//{
//    double lim, pi = 0, num = 1.0;
//    scanf("%lf", &lim);
//    int n = 1;
//    while (num >= lim)
//    {
//        num = (n * num) / (2 * n + 1);
//        n++;
//        pi += num;
//    }
//    printf("%lf", 2.0 * (pi + 1.0));
//    return 0;
//}
//
////7-16 求符合给定条件的整数集
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count = 0;
//    for (int k = a; k < a + 4; k++)
//    {
//        for (int n = a; n < a + 4; n++)
//        {
//            for (int m = a; m < a + 4; m++)
//            {
//                if (k != n && k != m && n != m)
//                {
//                    printf("%d%d%d", k, n, m);
//                    count++;
//                    if (count % 6)
//                        printf(" ");
//                    else
//                        printf("\n");
//                }
//            }
//        }
//    }
//    return 0;
//}
//
////7-17 爬动的蠕虫
//int main()
//{
//    int n, u, d, h = 0, t = 0;
//    scanf("%d %d %d", &n, &u, &d);
//    while (1)
//    {
//        h += u;
//        t++;
//        if (h >= n)
//            break;
//        h -= d;
//        t++;
//    }
//    if (t < 1)
//        t = 1;
//    printf("%d", t);
//    return 0;
//}
//
//7-18 二分法求多项式单根
double a3, a2, a1, a0;
double fun(double x)
{
    return (a3 * x * x * x + a2 * x * x + a1 * x + a0);
}
int main()
{
    double l, r, mid;
    scanf("%lf %lf %lf %lf\n%lf %lf", &a3, &a2, &a1, &a0, &l, &r);
    while (r - l >= 0.001)
    {
        mid = (l + r) / 2.0;
        if (fun(mid) == 0)
            break;
        else if ((fun(mid) > 0 && fun(r) > 0) || (fun(mid) < 0 && fun(r) < 0))
            r = mid;
        else if ((fun(mid) > 0 && fun(l) > 0) || (fun(mid) < 0 && fun(l) < 0))
            l = mid;
    }
    printf("%.2lf", mid);
    return 0;
}