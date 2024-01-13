#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC137 序列重组矩阵
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            //读一个数据马上打印，可以少写一个循环
//            scanf("%d", &arr[i][j]);
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC138 矩阵转置
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC139 矩阵交换
//void SwapRowCol(int arr[10][10], int n, int m, char t, int a, int b)
//{
//    if (t == 'r')//交换行(行不变，列数据依次交换)
//    {
//        for (int i = 0; i < m; i++)
//        {
//            int tmp = arr[a - 1][i];
//            arr[a - 1][i] = arr[b - 1][i];
//            arr[b - 1][i] = tmp;
//        }
//    }
//    else if (t == 'c')//交换列（列不变，行数据依次交换）
//    {
//        for (int i = 0; i < n; i++)
//        {
//            int tmp = arr[i][a - 1];
//            arr[i][a - 1] = arr[i][b - 1];
//            arr[i][b - 1] = tmp;
//        }
//    }
//}
//int main()
//{
//    int n, m, k, a, b;
//    char t;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    scanf("%d", &k);
//    while (k--)//控制交换次数
//    {
//        scanf("\n%c %d %d", &t, &a, &b);
//        SwapRowCol(arr, n, m, t, a, b);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//BC140 杨辉三角
int main()
{
    int n;
    scanf("%d", &n);
    int arr[30][30] = { 0 };

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)//处理边上数据
                arr[i][j] = 1;
            if (i >= 2 && j >= 1)//处理中间数据
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    //打印
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}