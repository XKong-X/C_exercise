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
//7-12 两个数的简单计算器
int main()
{
    int num1, num2;
    char sign;
    scanf("%d %c %d", &num1, &sign, &num2);
    if (sign == '+')
        printf("%d", num1 + num2);
    else if (sign == '-')
        printf("%d", num1 - num2);
    else if (sign == '*')
        printf("%d", num1 * num2);
    else if (sign == '/')
        printf("%d", num1 / num2);
    else if (sign == '%')
        printf("%d", num1 % num2);
    else
        printf("ERROR");
    return 0;
}