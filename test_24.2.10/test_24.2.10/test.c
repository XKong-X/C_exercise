#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

////дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//typedef struct Stu
//{
//	char a;
//	char b[10];
//	char c;
//}stu;
//
//#define OFFSETOF(type, member) (size_t)&(((type*)0)->member)//����ṹ���ַ��0λ�ÿ�ʼ
//
//int main()
//{
//	printf("%u\n", OFFSETOF(stu, a));//a����ĵ�ַΪ0x 00 00 00 00,��ôaǿתΪsize_t�Ĵ�СΪ0
//	printf("%u\n", OFFSETOF(stu, b));//b����ĵ�ַΪ0x 00 00 00 01,��ôbǿתΪsize_t�Ĵ�СΪ1
//	printf("%u\n", OFFSETOF(stu, c));//c����ĵ�ַΪ0x 00 00 00 b1,��ôcǿתΪsize_t�Ĵ�СΪ11
//	return 0;
//}
//
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ����
#define SWAP(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))

int main()
{
	int n = 10;
	printf("%d", SWAP(n));
	return 0;
}