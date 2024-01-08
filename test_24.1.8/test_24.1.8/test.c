#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7-1 ¿Â√◊ªªÀ„”¢≥ﬂ”¢¥Á(SBÃ‚ƒø)
int main()
{
    int cm;
    scanf("%d", &cm);
    int foot = cm / 30.48;
    int inch = (cm / 30.48 - foot) * 12;
    printf("%d %d", foot, inch);
    return 0;
}