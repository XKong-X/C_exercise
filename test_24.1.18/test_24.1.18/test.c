#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7-2 Ȼ���Ǽ���
//int main()
//{
//    int start, change;
//    scanf("%d %d", &start, &change);
//    int m = start / 100 * 60 + start % 100 + change;
//    printf("%01d%02d", m / 60, m % 60);
//    return 0;
//}
//
//7-3 �������λ��
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;//Ĭ�Ͻ�βΪ��
    while (n)
    {
        if (n % 10 != 0)
            flag = 1;
        if (flag)//�����ֵ�һ����Ϊ�����ʱ��ʼ��ӡ
            printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}