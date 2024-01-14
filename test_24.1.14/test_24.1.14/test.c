#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC159 ÍÃ×ÓµÄÐòÁÐ
#include <math.h>
int SeqName(const int arr[], const int n)
{
    int name = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (((int)sqrt(arr[i]) != arr[i] / (int)sqrt(arr[i])) && name < arr[i])
            name = arr[i];
    }
    return name;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("%d", SeqName(arr, n));
    return 0;
}