#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////简单模拟实现库函数strlen
//////常规方法实现
////int my_strlen(char* s)
////{
////	int count = 0;
////	while (*(s++) != '\0')
////	{
////		count++;
////	}
////	return count;
////}
////递归实现
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
////n的阶乘
//////常规方法实现
////int Fac(int n)
////{
////	int tmp = 1;
////	for (int i = n; i > 0; i--)
////	{
////		tmp *= i;
////	}
////	return tmp;
////}
////递归实现
//int Fac(int n)
//{
//	if (n<=1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0)
//	{
//		int ret = Fac(n);
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("不存在！\n");
//	}
//	return 0;
//}
//
////斐波那契数列
////常规方法实现
//int Fib(int n)
//{
//	int a, b, c;
//	a = b = c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		n--;
//	}
//	return c;
//}
////递归实现
//int Fib(int n)
//{
//	int ret;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//
////递归实现n的k次方
//double pow_num(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * pow_num(n, k - 1);
//	}
//	else//k<0
//	{
//		return (1.0 / n) * pow_num(n, k + 1);
//	}
//}
//int main() 
//{
//	int n, k;
//	while (~scanf("%d %d", &n, &k))
//	{
//		double ret = pow_num(n, k);
//		printf("%lf\n", ret);
//	}
//	return 0;
//}
//
////计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int ret = DigitSum(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//
////字符串逆序（递归实现）
//int my_strlen(char* s)//求字符串长度
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//void reverse_string(char arr[], int l, int r)//字符串逆序
//{
//	if (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++; r--;
//		reverse_string(arr, l, r);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	int l = 0;
//	int r = len - 1;
//	reverse_string(arr,l,r);
//	puts(arr);//验证
//	return 0;
//}
//
////递归方式实现打印一个整数的每一位
//void DigitSum(int n)
//{
//	if (n >= 10)
//	{
//		DigitSum(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		DigitSum(n);
//	}
//	return 0;
//}