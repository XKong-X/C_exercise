#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////7-4 BCD����
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
//7-5 ��������ɵ��һ��Ŀ��
int main()
{
    /*printf("------------------------------------\n");
    printf("%-14s%9s   %-9s\n", "Province", "Area(km2)", "Pop.(10K)");
    printf("------------------------------------\n");
    printf("%-14s%9.2lf   %-9.2lf\n", "Anhui", 139600.00, 6461.00);
    printf("%-14s%9.2lf   %-9.2lf\n", "Beijing", 16410.54, 1180.70);
    printf("%-14s%9.2lf   %-9.2lf\n", "Chongqing", 82400.00, 3144.23);
    printf("%-14s%9.2lf   %-9.2lf\n", "Shanghai", 6340.50, 1360.26);
    printf("%-14s%9.2lf   %-9.2lf\n", "Zhejiang", 101800.00, 4894.00);
    printf("------------------------------------");*/
    printf("------------------------------------\n");
    printf("Province      Area(km2)   Pop.(10K)\n");
    printf("------------------------------------\n");
    printf("Anhui         139600.00   6461.00\n");
    printf("Beijing        16410.54   1180.70\n");
    printf("Chongqing      82400.00   3144.23\n");
    printf("Shanghai        6340.50   1360.26\n");
    printf("Zhejiang      101800.00   4894.00\n");
    printf("------------------------------------");//���һ�в�Ҫ��\n��������һ�� 
    return 0;
}