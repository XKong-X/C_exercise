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