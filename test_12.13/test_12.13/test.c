#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//添加逗号
#include <string.h>
int main()
{
    char s[10] = { 0 };
    scanf("%s", &s);
    int len = strlen(s);//获取字符长度
    for (int i = 1; i <= len; i++)//依次输出字符
    {
        printf("%c", s[i - 1]);
        if ((len - i) % 3 == 0 && i != len)//每打印三个数字就打印一个‘，’且最后一个数字后不打印‘，’)
            printf("%c", ',');
    }
    return 0;
}