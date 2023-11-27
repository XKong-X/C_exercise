#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////×Ö·û´®²Ù×÷
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
////Ð¡ÀÖÀÖ¼ÆËãº¯Êý
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