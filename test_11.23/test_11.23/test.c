#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��ӡһ��n�е�����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//��
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ��*��
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ��*��
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////����ˮ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int empty = money/1;
//	//int total = money/1;
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("%d", total);
//	if (money > 0)
//		printf("%d", 2 * money - 1);
//	else
//		printf("%d", 0);
//	return 0;
//}
//
////С���������ת��
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[12] = { 0 };
//    int count = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//        count++;
//    }
//    for (i = count; i > 0; i--)
//    {
//        printf("%d", arr[i - 1]);
//    }
//    return 0;
//}
//
////�ж��������Ĵ�С��ϵ
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (~scanf("%d %d", &a, &b))
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}
//
////��5��������
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
//
////�߶�ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////���ĶԳ���
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    //����1-100000
//    for (i = 1; i <= n; i++)
//    {
//        int k = 0;
//        int tmp = i;
//        //������ת
//        while (tmp)
//        {
//            k = k * 10 + tmp % 10;
//            tmp /= 10;
//        }
//        //�ȽϽ���ǰ�ͽ������ֵ
//        if (k == i)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//
//������ͼ��
// //����1�����Ƽ���
// int main()
// {
//     int n = 0;
//     while (~scanf("%d", &n))
//     {
//         int i = 0;
//         int count = 0;
//         for (i = 1; i <= n; i++)
//         {
//             for (i = 1; i <= n; i++)
//             {
//                 printf("* ");
//             }
//             count++;
//             printf("\n");
//             if (i == n+1)
//                 i = 1;
//             if (count == n)
//                 break;
//         }
//     }
//     return 0;
// }
////����2���Ƽ���
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int count = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////ֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////��תֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
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
////���ո�ֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 2 * (n - i); j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}