#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////С�����ŵ���
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    if (n < 12)
//    {
//        printf("2\n");
//    }
//    else
//    {
//        printf("%d\n", (4 * (n / 12) + 2));
//    }
//    return 0;
//}
//
////С������ŷ�����(2*2�ַ���)
//#include <math.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    long long sum = (long long)n * m;//��¼�˻���������С������
//    //ȷ��n>m���Է�������
//    if (n < m)
//    {
//        n = n ^ m;
//        m = n ^ m;
//        n = n ^ m;
//    }
//    //�����Լ������һ(�Ƽ�)
//    while (m)
//    {
//        int tmp = n % m;
//        n = m;
//        m = tmp;
//    }
//    int gcd = n;
//    // //�����Լ��������(���Ƽ�)
//    // while(n!=m)
//    // {
//    //     if(n>m)
//    //     {
//    //         n=n-m;
//    //     }
//    //     else if(n<m)
//    //     {
//    //         m=m-n;
//    //     }
//    // }
//    // int gcd=m;
//    //�����Լ��������С������
//    long long lcm = sum / gcd;
//    ////���淽������С������(ʱ��ϳ������Ƽ�)
//    // long long i = 0;
//    // for (i = n1; i < sum; i++)
//    // {
//    //     if (((i % n1) == 0) && ((i % m1) == 0))
//    //     {
//    //         break;
//    //     }
//    // }
//    // long long lcm = i;
//    printf("%lld\n", (long long)gcd + lcm);
//    return 0;
//}