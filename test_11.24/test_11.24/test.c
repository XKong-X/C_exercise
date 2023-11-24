#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////[NOIP2013]记数问题
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
////逆序输出
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
////N个数之和
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
////最高分与最低分之差
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