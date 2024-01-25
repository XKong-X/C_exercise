#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//模拟实现库函数strncpy
char* my_strncpy(char* dest, const char* src, size_t num)//用const修饰*src，防止原值被改变
{
	assert(dest && src);//断言（所传地址为NULL时停止运行并报出错误所在位置）
	char* ret = dest;//保存目标值的地址
	size_t count = 0;//记录拷贝字符的个数
	while (++count <= num && (*dest++ = *src++));//循环将*src（原值）中的字符传给*dest（目标值），直到遇到'\0'或当count等于num时跳出循环
	return ret;//返回目标值的地址
}
int main()
{
	char str1[20] = { 0 };
	char str2[] = "Hello World";
	my_strncpy(str1, str2, 7);//strncpy函数不会在字符串拷贝结束后补'\0'
	//strncpy(str1, str2, 7);
	printf(str1);
	return 0;
}