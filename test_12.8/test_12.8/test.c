#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��ģ��ʵ�ֿ⺯��strlen
//////���淽��ʵ��
////int my_strlen(char* s)
////{
////	int count = 0;
////	while (*(s++) != '\0')
////	{
////		count++;
////	}
////	return count;
////}
////�ݹ�ʵ��
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
////n�Ľ׳�
//////���淽��ʵ��
////int Fac(int n)
////{
////	int tmp = 1;
////	for (int i = n; i > 0; i--)
////	{
////		tmp *= i;
////	}
////	return tmp;
////}
////�ݹ�ʵ��
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
//		printf("�����ڣ�\n");
//	}
//	return 0;
//}
//
////쳲���������
////���淽��ʵ��
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
////�ݹ�ʵ��
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
////�ݹ�ʵ��n��k�η�
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
////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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
////�ַ������򣨵ݹ�ʵ�֣�
//int my_strlen(char* s)//���ַ�������
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//void reverse_string(char arr[], int l, int r)//�ַ�������
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
//	puts(arr);//��֤
//	return 0;
//}
//
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//
////ð������
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10] = { 0 };//����25 35 68 79 21 13 98 7 16 62
//	int i, j, tmp;
//	for (i = 0; i < n; i++)//������
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)//���ѭ��
//	{
//		int flag = 0;
//		for (j = i + 1; j < n ; j++)//�ڲ�ѭ��
//		{
//			if (arr[i] > arr[j])//����
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)//���ĳ��ѭ��û���н�������˵��������������������ѭ��
//			break;
//	}
//	for (i = 0; i < 10; i++)//��ӡ��֤
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
