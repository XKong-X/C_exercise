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
//
