#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��n��ǰm��֮��(����n=2��m=5,��Sn=2+22+222+2222+22222=24690)
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
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����nԪ�����Ժȶ�����ˮ
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