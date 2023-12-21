#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串（例如：给定s1 = AABCD和s2 = BCDAA，返回1；给定s1 = abcd和s2 = ACBD，返回0.）
int IsTurnStr(char* str1, char* str2, int len)
{
	int flag = 0;
	for (int i = 0; i < len; i++)//控制交换次数
	{
		if (strcmp(str1, str2) == 0)//先判断，再交换
		{
			flag = 1;
			break;
		}
		char tmp = *str2;
		for (int j = 0; j < len - 1; j++)
		{
			str2[j] = str2[j + 1];
		}
		str2[len - 1] = tmp;
	}
	return flag;
}
int main()
{
	char s1[] = "aabcd";
	char s2[] = "BCDAA";
	int len = strlen(s1);
	int ret = IsTurnStr(s1, s2, len);
	if (ret)
		printf("是\n");
	else
		printf("否\n");
	return 0;
}