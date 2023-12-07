#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////求n的前m项之和(例：n=2，m=5,则Sn=2+22+222+2222+22222=24690)
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int k = 0;
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		k = n + k * 10;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}