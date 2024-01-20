#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7-4 BCD解密
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (!n)
//    {
//        printf("%d", 0);
//        return 0;
//    }
//    printf("%d%d", n / 16, n % 16);
//    return 0;
//}
//
////7-5 表格输出（傻波一题目）
//int main()
//{
//    /*printf("------------------------------------\n");
//    printf("%-14s%9s   %-9s\n", "Province", "Area(km2)", "Pop.(10K)");
//    printf("------------------------------------\n");
//    printf("%-14s%9.2lf   %-9.2lf\n", "Anhui", 139600.00, 6461.00);
//    printf("%-14s%9.2lf   %-9.2lf\n", "Beijing", 16410.54, 1180.70);
//    printf("%-14s%9.2lf   %-9.2lf\n", "Chongqing", 82400.00, 3144.23);
//    printf("%-14s%9.2lf   %-9.2lf\n", "Shanghai", 6340.50, 1360.26);
//    printf("%-14s%9.2lf   %-9.2lf\n", "Zhejiang", 101800.00, 4894.00);
//    printf("------------------------------------");*/
//    printf("------------------------------------\n");
//    printf("Province      Area(km2)   Pop.(10K)\n");
//    printf("------------------------------------\n");
//    printf("Anhui         139600.00   6461.00\n");
//    printf("Beijing        16410.54   1180.70\n");
//    printf("Chongqing      82400.00   3144.23\n");
//    printf("Shanghai        6340.50   1360.26\n");
//    printf("Zhejiang      101800.00   4894.00\n");
//    printf("------------------------------------");//最后一行不要加\n，否则会空一行 
//    return 0;
//}
//
////7-6 混合类型数据格式化输入
//int main()
//{
//    float f1, f2;
//    int n;
//    char c;
//    scanf("%f %d %c %f", &f1, &n, &c, &f2);
//    printf("%c %d %.2f %.2f", c, n, f1, f2);
//    return 0;
//}
//
//7-7 12-24小时制
int main()
{
    int h, m;
    scanf("%d:%d", &h, &m);
    if (h / 12 == 1)
    {
        if (h == 12)
            printf("%1d:%1d PM", h, m);
        else
            printf("%1d:%1d PM", h % 12, m);
    }
    else
        printf("%1d:%1d AM", h, m);
    return 0;
}