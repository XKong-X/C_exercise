#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    while (~scanf("%d %d", &m, &n))
    {
        int k = 0;
        int i = 0;
        int flag = 1;
        for (i = m; i <= n; i++)//����m-n����(����m��n)
        {
            k = 0;//ÿ��ѭ������kΪ0
            int tmp = i;
            while (tmp)
            {
                k += pow(tmp % 10, 3);
                tmp /= 10;
            }
            if (i == k)
            {
                printf("%d ", k);
                flag = 0;
            }
        }
        if (flag)
            printf("no\n");
    }
    return 0;
}