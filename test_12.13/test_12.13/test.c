#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��Ӷ���
#include <string.h>
int main()
{
    char s[10] = { 0 };
    scanf("%s", &s);
    int len = strlen(s);//��ȡ�ַ�����
    for (int i = 1; i <= len; i++)//��������ַ�
    {
        printf("%c", s[i - 1]);
        if ((len - i) % 3 == 0 && i != len)//ÿ��ӡ�������־ʹ�ӡһ�������������һ�����ֺ󲻴�ӡ������)
            printf("%c", ',');
    }
    return 0;
}