#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

////写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//typedef struct Stu
//{
//	char a;
//	char b[10];
//	char c;
//}stu;
//
//#define OFFSETOF(type, member) (size_t)&(((type*)0)->member)//假设结构体地址从0位置开始
//
//int main()
//{
//	printf("%u\n", OFFSETOF(stu, a));//a假设的地址为0x 00 00 00 00,那么a强转为size_t的大小为0
//	printf("%u\n", OFFSETOF(stu, b));//b假设的地址为0x 00 00 00 01,那么b强转为size_t的大小为1
//	printf("%u\n", OFFSETOF(stu, c));//c假设的地址为0x 00 00 00 b1,那么c强转为size_t的大小为11
//	return 0;
//}
//
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换
#define SWAP(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))

int main()
{
	int n = 10;
	printf("%d", SWAP(n));
	return 0;
}