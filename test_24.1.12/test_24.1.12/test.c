#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////����ˮ�ɻ�
//int main()
//{
//    for (int i = 10000; i <= 99999; i++)//����������λ��
//    {
//        int sum = 0;
//        int k = 10;
//        while (i / k)
//        {
//            sum += (i / k) * (i % k);//��Ҫ�ÿ⺯�������ò��ң���ʱ��
//            k *= 10;
//        }
//        if (sum == i)//������ӡ
//            printf("%d ", i);
//    }
//    return 0;
//}
//
////BC133 ���;���
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
//        //�ϱߵı߽�
//        for (k = left; k <= right; k++)
//            arr[up][k] = num++;
//        up++;
//        //�ұߵı߽�
//        for (k = up; k <= down; k++)
//            arr[k][right] = num++;
//        right--;
//        //�±ߵı߽�
//        for (k = right; k >= left; k--)
//            arr[down][k] = num++;
//        down--;
//        //��ߵı߽�
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
//BC135 ͼ�����ƶ�
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