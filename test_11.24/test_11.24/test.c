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