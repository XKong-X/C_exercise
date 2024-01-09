#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//库函数strlen的模拟实现
size_t my_strlen(const char* p)
{
	assert(p);//断言
	size_t count = 0;
	while (*p++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[20] = "abc";
	size_t sz = my_strlen(arr);
	printf("%zd\n", sz);
	return 0;
}