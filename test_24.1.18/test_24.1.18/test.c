#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7-2 然后是几点
int main()
{
    int start, change;
    scanf("%d %d", &start, &change);
    int m = start / 100 * 60 + start % 100 + change;
    printf("%01d%02d", m / 60, m % 60);
    return 0;
}