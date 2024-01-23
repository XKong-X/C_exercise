#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7 - 22 龟兔赛跑
int main()
{
    int t, s1 = 0, s2 = 0;
    scanf("%d", &t);
    while (t)
    {
        if (s1 > s2)
        {
            if (t >= 30)
            {
                s2 += 90;
                t -= 30;
            }
            else
            {
                s2 += 3 * t;
                t = 0;
            }
        }
        else
        {
            if (t >= 10)
            {
                s1 += 90;
                s2 += 30;
                t -= 10;
            }
            else
            {
                s1 += 9 * t;
                s2 += 3 * t;
                t = 0;
            }
        }
    }
    if (s1 > s2)
        printf("%s %d", "^_^", s1);
    else if (s1 < s2)
        printf("%s %d", "@_@", s2);
    else
        printf("%s %d", "-_-", s1);//平局也要输出胜者的距离
    return 0;
}