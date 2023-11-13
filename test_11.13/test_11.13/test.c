#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    while (scanf("%d %d %d", &s1, &s2, &s3) != EOF)
//    {
//        printf("score1=%d,score2=%d,score3=%d", s1, s2, s3);
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    float c = 0.0;
//    float mat = 0.0;
//    float eng = 0.0;
//    while (scanf("%d;%f,%f,%f", &n, &c, &mat, &eng) != EOF)
//    {
//        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", n, c, mat, eng);
//    }
//}
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    while (scanf("%4d %2d %2d", &y, &m, &d) != EOF)
//    {
//        printf("year=%4d\nmonth=%02d\ndate=%02d", y, m, d);
//    }
//    return 0;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("a=%d,b=%d", &a, &b) != EOF)
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//        printf("a=%d,b=%d\n", a, b);
//        break;
//    }
//    return 0;
//}
//
//#include <ctype.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        else if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//    }
//    return 0;
//}
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int del = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//	
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[9999];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[9999];
//	scanf("%d", &n);
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	printf("%d\n", max - min);
//	return 0;
//}
//
//int main()
//{
//	int s = 0;
//	int max = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &s);
//		if (max < s)
//		{
//			max = s;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//			printf("%d ", sum);
//		
//	}
//	return 0;
//}
//
////野指针形成原因展示1
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
////野指针形成原因展示2
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//
//	return 0;
//}
//
////野指针形成原因展示3
//int main()
//{
//	int* p = NULL;
//	*p = 100;
//	return 0;
//}
//
////指针建议使用方法
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)//不是空指针才使用
//	{
//		*p = 100;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	////数组下标写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//	////指针写法1
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	p++;
//	//}
//	//指针写法2
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}