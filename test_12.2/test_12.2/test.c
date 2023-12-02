#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////金字塔图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //控制行数
//        for (int i = 1; i <= n; i++)
//        {
//            //打印空格
//            for (int j = n - i; j > 0; j--)
//            {
//                printf(" ");
//            }
//			  //打印‘*’	
//            for (int j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////翻转金字塔图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //控制行数
//        for (int i = 1; i <= n; i++)
//        {
//            //打印空格
//            for (int j = 1; j < i; j++)
//            {
//                printf(" ");
//            }
//            //打印‘*’
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////菱形图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //上半部分
//        for (int i = 1; i <= n + 1; i++)
//        {
//            //打印空格
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf(" ");
//            }
//            //打印‘*’
//            for (int j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (int i = 1; i <= n; i++)
//        {
//            //打印空格
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //打印‘*’
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////K形图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //上半部分
//        for (int i = 1; i <= n + 1; i++)
//        {
//            for (int j = n - i + 2; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////箭形图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //上半部分
//        for (int i = 1; i <= n + 1; i++)
//        {
//            //打印空格
//            for (int j = 2 * (n - i + 1); j > 0; j--)
//            {
//                printf(" ");
//            }
//            //打印‘*’
//            for (int j = 0; j < i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (int i = 1; i <= n; i++)
//        {
//            //打印空格
//            for (int j = 0; j < 2 * i; j++)
//            {
//                printf(" ");
//            }
//            //打印‘*’
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////反斜线形图案
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}