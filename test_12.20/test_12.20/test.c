#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//字符串左旋（例如：ABCD左旋一个字符得到BCDA；ABCD左旋两个字符得到CDAB）
void TurnLeftStr(char* str, int k, int len)
{
	
	for (int i = 0; i < k; i++)//控制交换次数
	{
		char tmp = *str;
		for (int j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;
	}
}
int main()
{
	int k;
	scanf("%d", &k);
	char s[] = "ABCD";
	int len = strlen(s);
	char* ps = s;
	TurnLeftStr(ps, k, len);
	printf("%s\n", ps);
	return 0;
}