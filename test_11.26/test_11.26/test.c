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
//矩阵元素定位
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[5][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", arr[x][y]);
    return 0;
}