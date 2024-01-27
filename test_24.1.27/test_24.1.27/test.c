#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//7-25 ÄîÊý×Ö
int main()
{
    int n, count = 0;
    scanf("%d", &n);

    int tmp = n;
    while (tmp)
    {
        tmp /= 10;
        count++;
    }

    if (n < 0)
    {
        printf("fu ");
        tmp = -n;
    }
    else if (n > 0)
    {
        tmp = n;
    }
    else
    {
        printf("ling");
        return 0;
    }

    while (count)
    {
        switch (tmp / (int)pow(10, count - 1))
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        }
        tmp -= (tmp / (int)pow(10, count - 1)) * (int)pow(10, count - 1);
        count--;
        if (count)
            printf(" ");
    }
    return 0;
}