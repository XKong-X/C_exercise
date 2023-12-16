#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Å£Å£µÄËØÊıºÍ
int is_prime(int n)
{
    int i = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        if (is_prime(i))
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}