#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char str1[101] = { 0 };
	char str2[101] = { 0 };
	gets(str1);
	gets(str2);
	char* p1 = str1;
	char* p2 = str2;
	char* pstr2 = p2;
	while (*p1 != '\0')
	{
		int flag = 1;
		while (*p2 != '\0')
		{
			if (*p2 == *p1 && *p1 != ' ')
				flag = 0;
			p2++;
		}
		if (flag)
			printf("%c", *p1);
		p1++;
		p2 = pstr2;
	}
	return 0;
}