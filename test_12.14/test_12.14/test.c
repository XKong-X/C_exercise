#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//竞选社长
int main()
{
    char s[100] = { 0 };
    scanf("%s", s);
    char* ps = s;
    int count = 0;
    while (*ps != '0')//ps指向的字符为'0'时结束循环
    {
        if (*ps == 'A')
            count++;
        else if (*ps == 'B')
            count--;
        ps++;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else//count=0，即A和B票数相等
        printf("E\n");
    return 0;
}