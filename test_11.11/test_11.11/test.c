#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int sec = 0;
//	scanf("%d", &sec);
//	int h = sec / 3600;
//	int m = (sec % 3600) / 60;
//	int s = (sec % 3600) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//
//int main()
//{
//	float score1 = 0.0;
//	float score2 = 0.0;
//	float score3 = 0.0;
//	scanf("%f %f %f", &score1, &score2, &score3);
//	float sum = score1 + score2 + score3;
//	float average = sum / 3.0;
//	printf("%.2f %.2f", sum, average);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		float s = 0.0;
//		scanf("%f", &s);
//		sum += s;
//	}
//	printf("%.2f %.2f", sum, sum / 3.0);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		//if (m % h != 0)
//		//{
//			printf("%d", n - (m / h) - (m % h));
//		//}
//		/*else
//		{
//			printf("%d", n - (m / h));
//		}*/
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}
//
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//	return 0;
//}
//
//int main()
//{
//	int a, b, c, d, e;
//	a = b = c = d = e = 0;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	printf("%.1f", (a + b + c + d + e) / 5.0);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int s = 0;
//		scanf("%d", &s);
//		sum += s;
//	}
//	printf("%.1f", sum / 5.0);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int s[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &s[i]);
//		sum += s[i];
//	}
//	printf("%.1f", sum / 5.0);
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int o = 0;
//	scanf("%x %o", &x, &o);
//	printf("%d", x + o);
//	return 0;
//}
//
//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price *= 0.7;
//		if (flag)
//		{
//			price -= 50;
//		}
//	}
//	else if (m == 12 && d == 12)
//	{
//		price *= 0.8;
//		if (flag)
//		{
//			price -= 50;
//		}
//	}
//	if (price < 0)
//		printf("0.00");
//	printf("%.2f", price);
//	return 0;
//}
//
//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	float cut = 1.0;
//	scanf("%f %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		cut = 0.7;
//	}
//	else if (m == 12 && d == 12)
//	{
//		cut = 0.8;
//	}
//	price = price * cut - flag * 50;
//	if (price < 0.0)
//		price=0.0;
//	printf("%.2f", price);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int cmp_int(void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, cmp_int);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
