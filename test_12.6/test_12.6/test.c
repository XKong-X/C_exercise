#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////������ɾ��ָ������(ֻ��ӡ�����洢)
//int main()
//{
//    int n, del;
//    scanf("%d", &n);
//    int arr[50];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
////ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//
////�ַ�����
//#include <string.h>
//int main()
//{
//	char ch[10001] = {0};
//	gets(ch);
//	//����
//	int l = 0;
//	int r = strlen(ch) - 1;
//	while (l < r)
//	{
//		int tmp = ch[l];
//		ch[l] = ch[r];
//		ch[r] = tmp;
//		l++; r--;
//	}
//	printf("%s", ch);
//	return 0;
//}
//
////��ӡ����(��)
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //�ϰ벿��
//        for (int i = 1; i < n + 1; i++)
//        {
//            //��ӡ�ո�
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("  ");
//            }
//            //��ӡ��*��
//            printf("* ");
//            for (int j = 1; j < i; j++)
//            {
//                printf("* * ");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (int i = 1; i < n; i++)
//        {
//            //��ӡ�ո�
//            for (int j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            //��ӡ��*��
//            printf("* ");
//            for (int j = n - i - 1; j > 0; j--)
//            {
//                printf("* * ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////���0��100000֮������С�ˮ�ɻ����������
//#include <math.h>
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		//��λ��
//		int count = 1;
//		while (tmp/=10)
//		{
//			count++;
//		}
//		tmp = i;
//		//���λ���ֵ�count(λ��)�η�֮��
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//��ˮ�ɻ������ӡ
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}