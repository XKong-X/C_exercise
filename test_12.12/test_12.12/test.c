#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////����������������������ʱ������
//void ExcNum(int* pa, int* pb)
//{
//	(*pa) = (*pa) ^ (*pb);
//	(*pb) = (*pa) ^ (*pb);
//	(*pa) = (*pa) ^ (*pb);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	ExcNum(&a,&b);
//	printf("%d %d", a, b);//��֤
//	return 0;
//}
//
//ͳ�ƶ�������1�ĸ���
int main()
{
    int n;
    scanf("%d", &n);
    int m = 1;
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (n & m)
            count++;
        n >>= 1;
    }
    printf("%d\n", count);
    return 0;
}