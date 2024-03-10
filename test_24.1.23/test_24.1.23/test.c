#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7 - 22 龟兔赛跑
//int main()
//{
//    int t, s1 = 0, s2 = 0;
//    scanf("%d", &t);
//    while (t)
//    {
//        if (s1 > s2)
//        {
//            if (t >= 30)
//            {
//                s2 += 90;
//                t -= 30;
//            }
//            else
//            {
//                s2 += 3 * t;
//                t = 0;
//            }
//        }
//        else
//        {
//            if (t >= 10)
//            {
//                s1 += 90;
//                s2 += 30;
//                t -= 10;
//            }
//            else
//            {
//                s1 += 9 * t;
//                s2 += 3 * t;
//                t = 0;
//            }
//        }
//    }
//    if (s1 > s2)
//        printf("%s %d", "^_^", s1);
//    else if (s1 < s2)
//        printf("%s %d", "@_@", s2);
//    else
//        printf("%s %d", "-_-", s1);//平局也要输出胜者的距离
//    return 0;
//}
//
//7-24 约分最简分式
void main()
{
    int n1, n2, maxn;
    scanf("%d/%d", &n1, &n2);
    if (n1 > n2)
        maxn = n2;
    else if (n1 < n2)
        maxn = n1;
    else
    {
        printf("1/1");
        return;
    }
    for (int i = maxn; i >= 2; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            n1 /= i;
            n2 /= i;
            if (n1 == 1 || n2 == 1)
            {
                printf("%d/%d", n1, n2);
                return;
            }
        }
    }
    printf("%d/%d", n1, n2);
}