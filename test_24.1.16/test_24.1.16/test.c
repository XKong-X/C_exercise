#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC172 ţţ��������
//int fun(int n, int tmp)
//{
//    if (n < tmp)
//        return 1;
//    else
//        return n * fun(n - 1, tmp);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int tmp = n - m + 1;
//    printf("%d", fun(n, tmp));
//    return 0;
//}
//
////BC173 ţţ�������
//void fun(int n)
//{
//    if (n > 0)
//    {
//        printf("%d", n % 10);
//        return fun(n / 10);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    fun(n);
//    return 0;
//}
//
//BC125 ����������ȥ��
void fun(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 1;//Ĭ����Ҫ��ӡ
        for (int j = 0; j < i; j++)//�Ա�һ��ǰ��������Ƿ�����ȵ�
        {
            if (arr[i] == arr[j])//�����flag��ֵ��Ϊ0������ӡ������������ǰѭ��
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[5000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    return 0;
}