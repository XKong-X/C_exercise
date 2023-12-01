#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////n*n乘法表
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%02d ", i * j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
////最大公约数
//int main()
//{
//	int n, m;
//	while (~scanf("%d %d", &n, &m))
//	{
//		////不需要确保n>m,下面算法会自动交换位置
//		//if (n < m)
//		//{
//		//	n = n ^ m;
//		//	m = n ^ m;
//		//	n = n ^ m;
//		//}
//		//求最大公约数
//		int tmp;
//		while (m)
//		{
//			tmp = n % m;
//			n = m;
//			m = tmp;
//		}
//		printf("最大公约数为：%d\n", n);
//	}
//	return 0;
//}
//
////打印100~200之间的素数
//#include <math.h>
//int main()
//{
//    for (int i = 101; i <= 200; i+=2)
//    {
//        int flag = 1;
//        for (int j = 3; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//            printf("%d ", i);
//    }
//    return 0;
//}
//
////通过移位运算（<<）实现2的n次方的计算
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", 1 << n);
//    return 0;
//}
//
////计算三角形的周长和面积
//#include <math.h>
//int main()
//{
//    double a, b, c;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        double p = 1.0 / 2.0 * (a + b + c);
//        printf("circumference=%.2lf area=%.2lf", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//    }
//    return 0;
//}
//
////KiKi和酸奶
//int main()
//{
//    int n, h, m, tmp;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        tmp = m / h;
//        if (m % h != 0)
//            tmp += 1;
//        printf("%d\n", n - tmp);
//    }
//    return 0;
//}
//
////kiki算数
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}