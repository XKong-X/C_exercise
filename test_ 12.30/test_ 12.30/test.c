#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAXN 10

//6-5 ���Զ�����Ԫ�ص����ֵ
typedef float ElementType;

ElementType Max(ElementType S[], int N);

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
ElementType Max(ElementType S[], int N)
{
    ElementType max = S[0];
    for (int i = 1; i < N; i++)
    {
        if (S[i] > max)
            max = S[i];
    }
    return max;
}