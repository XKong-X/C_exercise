#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ˮ�ɻ�
int main()
{
    for (int i = 10000; i <= 99999; i++)//����������λ��
    {
        int sum = 0;
        int k = 10;
        while (i / k)
        {
            sum += (i / k) * (i % k);//��Ҫ�ÿ⺯�����ᳬʱ
            k *= 10;
        }
        if (sum == i)//������ӡ
            printf("%d ", i);
    }
    return 0;
}