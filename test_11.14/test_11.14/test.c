#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////指针-指针的绝对值,得到的是指针之间元素的个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	return 0;
//}
//
////错误的指针减法计算(指向不同空间时不要相减)
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);
//	return 0;
//}
//
////1.
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//
////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}
//
////指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	//存放指针的数组（指针数组）
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *parr[i]);
//	}
//
//	return 0;
//}
//
////用指针数组来模拟二维数组
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////结构体访问及传参
//struct man
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//
//struct st
//{
//	struct man p;
//	int num;
//	float f;
//};
//
//void print1(struct man p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体指针->成员变量
//}
//
//void print2(struct man* sp) 
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体变量.成员变量
//}
//
//int main()
//{
//	struct man p = { "张三","189****3501","男",181};//结构体变量的创建
//	struct st s = { { "李四","189****3502","女",166 },100 ,3.14f};
//
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p);
//	print2(&p);
//
//	return 0;
//}
//
//统计二进制中1的个数(三种方法)
////1.
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
////2.
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////3.
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//
////判断一个数是否为2的n次方
//int num_2(int n)
//{
//		if ((n & (n - 1)) == 0)
//			return 1;
//		else
//			return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = num_2(num);
//	if (n)
//		printf("%d是2的n次方\n", num);
//	else
//		printf("%d是不2的n次方\n", num);
//	return 0;
//}
//
//求两个int(32)位整数和n的二进制表达中，不同位（bit）的个数
////1.
//int num_differ(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
////2.
//int num_differ(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = num_differ(m,n);
//	printf("%d\n", ret);
//	return 0;
//}
//
