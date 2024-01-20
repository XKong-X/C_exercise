#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7-4 BCDΩ‚√‹
int main()
{
    int n;
    scanf("%d", &n);
    if (!n)
    {
        printf("%d", 0);
        return 0;
    }
    printf("%d%d", n / 16, n % 16);
    return 0;
}