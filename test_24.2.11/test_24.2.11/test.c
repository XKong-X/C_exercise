#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Ìí¼Ó¶ººÅ
int main()
{
    int n, i = 0, k = 0;
    scanf("%d", &n);
    char str[15] = { 0 };
    while (n)
    {
        if (k != 0 && k % 3 == 0)
            str[i++] = ',';
        str[i++] = n % 10 + '0';
        n /= 10;
        k++;
    }
    for (i--; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}