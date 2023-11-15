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
// 
////计算带余除法
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    printf("%d %d", n / m, n % m);
//    return 0;
//}
//
////时间转换
//int main()
//{
//    int sec = 0;
//    scanf("%d", &sec);
//    int h = sec / 3600;
//    int m = (sec % 3600) / 60;
//    int s = sec % 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}
//
////你能活多少秒
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    long long s = (long long)age * 3.156e7;
//    printf("%lld", s);
//    return 0;
//}