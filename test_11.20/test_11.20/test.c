#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////[NOIP2008]ISBNºÅÂë
//#include <string.h>
//int main()
//{
//    char ch[14] = "0";
//    scanf("%s", &ch);
//    //int sz = sizeof(ch) / sizeof(ch[0]) - 1;
//    int len = strlen(ch);
//    int i = 0;
//    int count = 1;
//    int sum = 0;
//    for (i=0;i<len-1;i++)
//    {
//        if (ch[i] >= '0' && ch[i] <= '9')
//        {
//            sum += (ch[i]-48)*count;
//            count++;
//        }
//    }
//    if (sum % 11 == 10)
//    {
//        if (ch[len - 1] == 'X')
//        {
//            printf("Right\n");
//        }
//        else
//        {
//            ch[len - 1] = 'X';
//            printf("%s\n", ch);
//        }
//    }
//    else
//    {
//        if (ch[len - 1] == (sum % 11) + 48)
//        {
//            printf("Right\n");
//        }
//        else
//        {
//            ch[len - 1] = (sum % 11) + 48;
//            printf("%s\n", ch);
//        }
//    }
//        return 0;
//}
//
////¼òµ¥¼ÆËãÆ÷
//int main()
//{
//    double n1 = 0.0;
//    char ch = 0;
//    double n2 = 0.0;
//    scanf("%lf%c%lf", &n1, &ch, &n2);
//    if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
//    {
//        printf("Invalid operation!\n");
//    }
//    else if (ch == '/' && n2 == 0.0)
//    {
//        printf("Wrong!Division by zero!\n");
//    }
//    else
//    {
//        double sum = 0.0;
//        switch (ch)
//        {
//        case '+':
//            sum = n1 + n2;
//            break;
//        case '-':
//            sum = n1 - n2;
//            break;
//        case '*':
//            sum = n1 * n2;
//            break;
//        case '/':
//            sum = n1 / n2;
//            break;
//        }
//        printf("%.4lf%c%.4lf=%.4lf", n1, ch, n2, sum);
//    }
//    return 0;
//}