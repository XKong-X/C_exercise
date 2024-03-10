#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//模拟实现库函数atoi
int my_atoi(const char* str)
{
	assert(str);
	while (*str == ' ')
		str++;
	int ret = 0;
	int flag = 0;
	if (*str++ == '-')
		flag = 1;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + (int)(*str++ - 48);
	if (flag)
		ret = -ret;
	return ret;
}
int main()
{
	char str[] = "  -0123456789";
	int ret1 = my_atoi(str);
	int ret2 = atoi(str);
	printf("%d\n", ret1);
	printf("%d", ret2);
	return 0;
}