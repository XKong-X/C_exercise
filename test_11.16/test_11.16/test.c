#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////小乐乐排电梯
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
////小乐乐与欧几里得(2*2种方法)
//#include <math.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    long long sum = (long long)n * m;//记录乘积用来求最小公倍数
//    //确保n>m，以方便运算
//    if (n < m)
//    {
//        n = n ^ m;
//        m = n ^ m;
//        n = n ^ m;
//    }
//    //求最大公约数，法一(推荐)
//    while (m)
//    {
//        int tmp = n % m;
//        n = m;
//        m = tmp;
//    }
//    int gcd = n;
//    // //求最大公约数，法二(不推荐)
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
//    //用最大公约数来求最小公倍数
//    long long lcm = sum / gcd;
//    ////常规方法求最小公倍数(时间较长，不推荐)
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