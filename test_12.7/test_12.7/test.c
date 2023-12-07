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
//
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给n元，可以喝多少汽水
//int main()
//{
//	int money;
//	while (~scanf("%d", &money))
//	{
//		int drink = 0;
//		int empty = 0;
//		drink = money / 1;
//		empty = drink / 1;
//		while (empty >= 2)
//		{
//			drink += empty / 2;
//			empty = empty / 2 + empty % 2;
//		}
//		if (money > 0)
//			printf("%d\n", drink);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}