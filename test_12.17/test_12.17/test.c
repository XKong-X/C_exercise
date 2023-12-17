#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////猜名次
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
////猜凶手
//int main()
//{
//	for (int killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}
//
//杨辉三角
int main()
{
	int arr[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}