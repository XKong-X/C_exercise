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