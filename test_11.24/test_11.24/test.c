#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////[NOIP2013]��������
//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d %d", &n, &x);
//    int arr[1000];
//    for (int i = 1; i <= n; i++)
//    {
//        arr[i - 1] = i;
//    }
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        while (arr[i])
//        {
//            if (arr[i] % 10 == x)
//            {
//                count++;
//            }
//            arr[i] /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//
////�������
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
////N����֮��
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        sum += tmp;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
////��߷�����ͷ�֮��
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int min = 100;
//    int max = 0;
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//    }
//    printf("%d", max - min);
//    return 0;
//}
//
////����ǰ����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50];
//    //������
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //ð�����򣨵���
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[i] < arr[j])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    //��ӡ
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}