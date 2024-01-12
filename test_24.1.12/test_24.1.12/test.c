#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////变种水仙花
//int main()
//{
//    for (int i = 10000; i <= 99999; i++)//生成所有五位数
//    {
//        int sum = 0;
//        int k = 10;
//        while (i / k)
//        {
//            sum += (i / k) * (i % k);//不要用库函数，会变得不幸（超时）
//            k *= 10;
//        }
//        if (sum == i)//相等则打印
//            printf("%d ", i);
//    }
//    return 0;
//}
//
////BC133 回型矩阵
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int arr[20][20];
//    int up = 0, down = n - 1, left = 0, right = n - 1;
//    int num = 1;
//    while (num <= n * n)
//    {
//        int k;
//        //上边的边界
//        for (k = left; k <= right; k++)
//            arr[up][k] = num++;
//        up++;
//        //右边的边界
//        for (k = up; k <= down; k++)
//            arr[k][right] = num++;
//        right--;
//        //下边的边界
//        for (k = right; k >= left; k--)
//            arr[down][k] = num++;
//        down--;
//        //左边的边界
//        for (k = down; k >= up; k--)
//            arr[k][left] = num++;
//        left++;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%-3d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//BC135 图像相似度
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr1[100][100], arr2[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    double count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                count++;
        }
    }
    printf("%.2lf", count / (m * n) * 100);
    return 0;
}