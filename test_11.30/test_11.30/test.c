#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//≈£≈£µƒ10¿‡»À
int main()
{
    int n;
    scanf("%d", &n);
    int num;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;
        int count0 = 0;
        int tmp;
        scanf("%d", &num);
        while (num)
        {
            tmp = num % 10;
            num /= 2;
            if (tmp % 2 == 1)
                count1++;
            else if (tmp % 2 == 0)
                count0++;
        }
        if (count1 % 2 == 0 && count0 % 2 == 0)
            printf("%d ", 10);
        else if (count1 % 2 == 0)
            printf("%d ", 1);
        else if (count0 % 2 == 0)
            printf("%d ", 0);
        else
            printf("%d ", 100);
    }
    return 0;
}