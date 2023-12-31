#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//6-8 �򵥽׳˼���
int Factorial(const int N);

int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Factorial(const int N)
{
    if (N > 0)
        return N * Factorial(N - 1);
    else if (N < 0)
        return 0;
    else
        return 1;
}