#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC172 еёеё╣дееапйЩ
int fun(int n, int tmp)
{
    if (n < tmp)
        return 1;
    else
        return n * fun(n - 1, tmp);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int tmp = n - m + 1;
    printf("%d", fun(n, tmp));
    return 0;
}