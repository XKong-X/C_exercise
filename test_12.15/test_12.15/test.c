#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//库函数strcpy的模拟实现
#include <assert.h>
char* my_strcpy(char* dest, const char* src)//用const修饰*src，防止原值被改变
{
	char* ret = dest;//保存目标值的地址
	//断言（所传地址为NULL时停止运行并报出错误所在位置）
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)//循环将*src（原值）中的字符传给*dest（目标值），直到遇到'\0'
		;//空语句
	*dest = *src;//完成'\0'的传值
	return ret;//返回目标值的地址
}
int main()
{
	char arr1[] = "Hello World";
	char arr2[100];
	printf("%s\n", my_strcpy(arr2, arr1));//打印验证
	return 0;
}