#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////������ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //��������
//        for (int i = 1; i <= n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = n - i; j > 0; j--)
//            {
//                printf(" ");
//            }
//			  //��ӡ��*��	
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
////��ת������ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //��������
//        for (int i = 1; i <= n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 1; j < i; j++)
//            {
//                printf(" ");
//            }
//            //��ӡ��*��
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
////����ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //�ϰ벿��
//        for (int i = 1; i <= n + 1; i++)
//        {
//            //��ӡ�ո�
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf(" ");
//            }
//            //��ӡ��*��
//            for (int j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (int i = 1; i <= n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //��ӡ��*��
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
////K��ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //�ϰ벿��
//        for (int i = 1; i <= n + 1; i++)
//        {
//            for (int j = n - i + 2; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //�°벿��
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
////����ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //�ϰ벿��
//        for (int i = 1; i <= n + 1; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 2 * (n - i + 1); j > 0; j--)
//            {
//                printf(" ");
//            }
//            //��ӡ��*��
//            for (int j = 0; j < i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (int i = 1; i <= n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 0; j < 2 * i; j++)
//            {
//                printf(" ");
//            }
//            //��ӡ��*��
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
////��б����ͼ��
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