#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////交换两个变量（不创建临时变量）
//void ExcNum(int* pa, int* pb)
//{
//	(*pa) = (*pa) ^ (*pb);
//	(*pb) = (*pa) ^ (*pb);
//	(*pa) = (*pa) ^ (*pb);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	ExcNum(&a,&b);
//	printf("%d %d", a, b);//验证
//	return 0;
//}
//
////统计二进制中1的个数
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int m = 1;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (n & m)
//            count++;
//        n >>= 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//
//打印整数二进制的奇数位和偶数位
int main()
{
	int n;
	scanf("%d", &n);
	int eve_dig = 2;
	int odd_dig = 1;
	int count_eve = 0;
	int count_odd = 0;
	for (int i = 0; i < 16; i++)
	{
		if (n & eve_dig)
			count_eve++;
		if (n & odd_dig)
			count_odd++;
		n >>= 2;
	}
	printf("偶数位有%d个 奇数位有%d个\n", count_eve, count_odd);
	return 0;
}