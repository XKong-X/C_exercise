#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////包含数字9的数
//int main()
//{
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int tmp = i;
//        while (tmp)
//        {
//            if (tmp % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            else
//            {
//                tmp /= 10;
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//
////小乐乐算多少人被请家长
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    int count = 0;
//    while (~scanf("%d %d %d", &s1, &s2, &s3))
//    {
//        if ((s1 + s2 + s3) / 3 < 60)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//
////公务员面试
//int main()
//{
//    int s = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int count = 0;
//    while (~scanf("%d", &s))
//    {
//        sum += s;
//        if (max < s)
//        {
//            max = s;
//        }
//        if (min > s)
//        {
//            min = s;
//        }
//        count++;
//        if (count == 7)
//        {
//            printf("%.2lf\n", (sum - max - min) / 5.0);
//            //重置数据
//            sum = 0;
//            max = 0;
//            min = 100;
//            count = 0;
//        }
//    }
//    return 0;
//}
//
////反向输出一个四位数
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = 0;
//    while (n)
//    {
//        k = k * 10 + n % 10;
//        n /= 10;
//    }
//    printf("%04d", k);
//    return 0;
//}