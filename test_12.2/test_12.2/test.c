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
//
////��б����ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = n - i; j > 0; j--)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}
//
////X��ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (i == j || i + j == n + 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////����������ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (i == 1 || i == n || j == 1 || j == n)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////����������ͼ��
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (j == 1 || i == n || i == j)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////����������
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        //��������(��ӡ��֦)
        for (int i = 1; i <= n * 3; i++)
        {
            //��ӡ��ո�
            for (int j = n * 3 - i; j > 0; j--)
            {
                printf(" ");
            }
            //��ӡС���Ǻ��ڿո�ѭ����������
            int count = 1;
            for (int k = 1; k <= i / 3 + 1; k++)
            {
                //��ӡС������
                if (i % 3 == 0 && count < k)//count<k���ڽ��ÿ��С���Ƕ��ӡһ��С���ǵײ�������
                {
                    printf("* * * ");
                    count++;
                }
                else
                {
                    for (int j = 1; j <= i % 3; j++)
                    {
                        printf("* ");
                    }
                }
                //��ӡ�ڿո�
                if (i % 3 != 0)
                {
                    for (int j = 3 - i % 3; j > 0; j--)
                    {
                        printf("  ");
                    }
                }
            }
            //ÿ��ӡ��һ�л�һ����
            printf("\n");
        }
        //��ӡ����
        for (int i = 1; i <= n; i++)
        {
            //��ӡ�ո�
            for (int j = (n - 1) * 3 + 2; j > 0; j--)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}