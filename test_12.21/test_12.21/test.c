#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ��������磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.��
int IsTurnStr(char* str1, char* str2, int len)
{
	int flag = 0;
	for (int i = 0; i < len; i++)//���ƽ�������
	{
		if (strcmp(str1, str2) == 0)//���жϣ��ٽ���
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
		printf("��\n");
	else
		printf("��\n");
	return 0;
}