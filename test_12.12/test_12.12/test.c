#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����������������������ʱ������
void ExcNum(int* pa, int* pb)
{
	(*pa) = (*pa) ^ (*pb);
	(*pb) = (*pa) ^ (*pb);
	(*pa) = (*pa) ^ (*pb);
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	ExcNum(&a,&b);
	printf("%d %d", a, b);//��֤
	return 0;
}
//
//