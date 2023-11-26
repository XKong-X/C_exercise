#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////班级成绩输入输出
//int main()
//{
//    double arr[5][5] = { 0.0 };
//    for (int i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%lf", &arr[i][j]);
//            printf("%.1lf ", arr[i][j]);
//            sum += arr[i][j];
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}
//
////矩阵元素定位
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[5][5];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x, y;
//    scanf("%d%d", &x, &y);
//    printf("%d", arr[x][y]);
//    return 0;
//}
//
////最高身高
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    int tmp1 = 0;
//    int tmp2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (arr[tmp1][tmp2] <= arr[i][j])
//            {
//                tmp1 = i;
//                tmp2 = j;
//            }
//        }
//    }
//    printf("%d %d", tmp1 + 1, tmp2 + 1);
//    return 0;
//}
//
//矩阵相等判定
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[10][10], arr2[10][10];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    if (count == n * m)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}