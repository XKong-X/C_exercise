#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC137 �����������
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //��һ���������ϴ�ӡ��������дһ��ѭ��
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}