#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////打印一个n行的菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//打印“*”
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印“*”
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////喝汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int empty = money/1;
//	//int total = money/1;
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("%d", total);
//	if (money > 0)
//		printf("%d", 2 * money - 1);
//	else
//		printf("%d", 0);
//	return 0;
//}