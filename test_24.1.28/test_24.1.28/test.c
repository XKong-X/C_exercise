#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7 - 25 念数字（代码修改，用更简短的代码实现）
int main()
{
    char str[15] = "**************";
    scanf("%s", str);
    for (int i = 0; i < sizeof(str); i++)
    {
        switch (str[i])
        {
        case '-':
            printf("fu");
            break;
        case '0':
            printf("ling");
            break;
        case '1':
            printf("yi");
            break;
        case '2':
            printf("er");
            break;
        case '3':
            printf("san");
            break;
        case '4':
            printf("si");
            break;
        case '5':
            printf("wu");
            break;
        case '6':
            printf("liu");
            break;
        case '7':
            printf("qi");
            break;
        case '8':
            printf("ba");
            break;
        case '9':
            printf("jiu");
            break;
        }
        if (str[i + 1] == '\0')
            return 0;
        printf(" ");
    }
    return 0;
}