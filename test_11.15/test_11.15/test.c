#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////获取月份天数
//int leap_year(int y)
//{
//	return ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days [13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((leap_year(y) == 1) && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}
//
////进制A+B
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}
//
////浮点数的个位数字
//int main()
//{
//    float n = 0.0;
//    scanf("%f", &n);
//    int num = (int)n;
//    printf("%d", num % 10);
//    return 0;
//}
