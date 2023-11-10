#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int num = (-8 + 22) * a - 10 + c + 2;
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}
//
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	scanf("%d %d", &weight, &height);
//	double BMI = weight / ((height / 100.0) * (height / 100.0));
//	printf("%.2lf", BMI);
//	return 0;
//}
//
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double C = a + b + c;
//	double p = C / 2.0;
//	double S = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("p=%.2lf s=%.2lf", C, S);
//	return 0;
//}
//
//int main()
//{
//	double pi = 3.1415926;
//	double r = 0.0;
//	scanf("%lf", &r);
//	printf("%.3lf", 4.0 / 3 * pi * r * r * r);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("a=%d b=%d c=%d",a,b,c);
//	return 0;
//}
//
//int main()
//{
//	
//	for (int i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		for (int j = 10; j <= 1000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if(sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum=(a + b) % 100;
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	int n = (int)a;
//	n %= 10;
//	printf("%d\n", n);
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long sum = age * 3.156e7;
//	printf("%lld\n", sum);
//	return 0;
//}