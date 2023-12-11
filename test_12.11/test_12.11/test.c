#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Ğ¡ÀÖÀÖ²éÕÒÊı×Ö
int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    printf("%d", count);
    return 0;
}