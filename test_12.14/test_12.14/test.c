#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ѡ�糤
int main()
{
    char s[100] = { 0 };
    scanf("%s", s);
    char* ps = s;
    int count = 0;
    while (*ps != '0')//psָ����ַ�Ϊ'0'ʱ����ѭ��
    {
        if (*ps == 'A')
            count++;
        else if (*ps == 'B')
            count--;
        ps++;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else//count=0����A��BƱ�����
        printf("E\n");
    return 0;
}