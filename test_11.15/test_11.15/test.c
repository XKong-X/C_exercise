#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��ȡ�·�����
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
////����A+B
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}
//
////�������ĸ�λ����
//int main()
//{
//    float n = 0.0;
//    scanf("%f", &n);
//    int num = (int)n;
//    printf("%d", num % 10);
//    return 0;
//}
// 
////����������
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    printf("%d %d", n / m, n % m);
//    return 0;
//}
//
////ʱ��ת��
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
////���ܻ������
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    long long s = (long long)age * 3.156e7;
//    printf("%lld", s);
//    return 0;
//}
//
////ͳ�Ƴɼ�
//int main() 
//{
//int n = 0;
//scanf("%d", &n);
//float s = 0.0;
//float max = 0.0;
//float min = 100.0;
//float sum = 0.0;
//int i = 0;
//for (i = 0; i < n; i++)
//{
//    scanf("%f", &s);
//    if (s > max)
//    {
//        max = s;
//    }
//    if (s < min)
//    {
//        min = s;
//    }
//    sum += s;
//}
//printf("%.2f %.2f %.2f", max, min, sum / n);
//return 0;
//}