#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC159 ���ӵ�����
//#include <math.h>
//int SeqName(const int arr[], const int n)
//{
//    int name = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (((int)sqrt(arr[i]) != arr[i] / (int)sqrt(arr[i])) && name < arr[i])
//            name = arr[i];
//    }
//    return name;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[1000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    printf("%d", SeqName(arr, n));
//    return 0;
//}
//
////BC163 ţţ���滻
//int main()
//{
//    int n;
//    char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//    getchar();//����������\n
//    char str[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        str[i] = getchar();
//        if (str[i] == a1)
//        {
//            if (a2 == a3)//���ҵ�a1��a2=a3ʱ��ֱ�Ӹ�ֵΪa4
//            {
//                str[i] = a4;
//                break;
//            }
//            else
//                str[i] = a2;
//        }
//        else if (str[i] == a3)
//            str[i] = a4;
//    }
//    printf("%s", str);
//    return 0;
//}
//
//BC164 ţţ����Ҷõ����
#include <math.h>
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++)
    {
        int tmp = i;
        int sum = 0;
        while (tmp)
        {
            sum += pow(tmp % 10, 4);
            tmp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}