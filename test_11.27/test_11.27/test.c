#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////字符串操作
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    char str[100];
//    scanf("%s", str);
//    for (int i = 0; i < m; i++)
//    {
//        int l, r;
//        char c1, c2;
//        scanf("%d %d %c %c", &l, &r, &c1, &c2);
//        for (int j = l - 1; j < r; j++)
//        {
//            if (str[j] == c1)
//            {
//                str[j] = c2;
//            }
//        }
//    }
//    printf("%s", str);
//    return 0;
//}
//
////小乐乐计算函数
//int max3(int a, int b, int c)
//{
//    int max;
//    if (a > b && a > c)
//    {
//        max = a;
//    }
//    else if (b > a && b > c)
//    {
//        max = b;
//    }
//    else if (c > a && c > b)
//    {
//        max = c;
//    }
//    return max;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}
//
////数位五五
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int count = 0;
//    int sum = 0;
//    for (int i = a; i <= b; i++)
//    {
//        int tmp = i;
//        sum = 0;
//        while (tmp)
//        {
//            sum += tmp % 10;
//            tmp /= 10;
//        }
//        if (sum % 5 == 0)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//
////The Biggest Water Problem
//int deal_with(int a)
//{
//    int tmp = 0;
//    while (a)
//    {
//        tmp += a % 10;
//        a /= 10;
//    }
//    return tmp;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    do
//    {
//        n = deal_with(n);
//    } while (n >= 10);
//    printf("%d", n);
//    return 0;
//}
//
////[NOIP2010]数字统计
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    int count = 0;
//    for (int i = l; i <= r; i++)
//    {
//        int tmp = i;
//        while (tmp)
//        {
//            if (tmp % 10 == 2)
//            {
//                count++;
//            }
//            tmp /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}