#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////n*n�˷���
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
////���Լ��
//int main()
//{
//	int n, m;
//	while (~scanf("%d %d", &n, &m))
//	{
//		////����Ҫȷ��n>m,�����㷨���Զ�����λ��
//		//if (n < m)
//		//{
//		//	n = n ^ m;
//		//	m = n ^ m;
//		//	n = n ^ m;
//		//}
//		//�����Լ��
//		int tmp;
//		while (m)
//		{
//			tmp = n % m;
//			n = m;
//			m = tmp;
//		}
//		printf("���Լ��Ϊ��%d\n", n);
//	}
//	return 0;
//}
//
//
