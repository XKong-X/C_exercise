#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//6-9 ͳ�Ƹ�λ����
int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Count_Digit(const int N, const int D)
{
    if (N == D)//��N��D���ʱ(��ʱNֻ��һλ)������1����Ҫ�Ǵ���N��D��Ϊ��ʱ����ѭ�����´��󷵻�0�����⣩
        return 1;
    int count = 0;
    int tmp;
    if (N >= 0)//��N�ľ���ֵ���м���
        tmp = N;
    else
        tmp = -N;
    while (tmp)
    {
        if (tmp % 10 == D)
            count++;
        tmp /= 10;
    }
    return count;
}