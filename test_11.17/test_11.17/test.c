#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////KiKi算期末成绩
//int main()
//{
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    int s4 = 0;
//    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
//    printf("%.1f", (s1 * 0.2 + s2 * 0.1 + s3 * 0.2 + s4 * 0.5));
//    return 0;
//}
//
////及格分数
//int main()
//{
//    int s = 0;
//    while (~scanf("%d", &s))
//    {
//        if (s >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}
//
////健康评估
//#include <math.h>
//int main()
//{
//    double w = 0.0;
//    double h = 0.0;
//    scanf("%lf %lf", &w, &h);
//    if ((w / pow(h, 2) >= 18.5) && (w / pow(h, 2) <= 23.9))
//        printf("Normal\n");
//    else
//        printf("Abnormal\n");
//    return 0;
//}
//
////判断是不是字母(用库函数isalpha)
//#include <ctype.h>
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();//清除缓存区的'\0'
//    }
//    return 0;
//}
//
////牛牛的二三七整除
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[3] = { 2,3,7 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        if (n % arr[i] == 0)
//            printf("%d ", arr[i]);
//    }
//    if (n % 2 != 0 && n % 3 != 0 && n % 7 != 0)
//        printf("n\n");
//    return 0;
//}
//
////统计数据正负个数
//int main()
//{
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		if (n >= 0)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	printf("positive:%d\nnegative:%d", count1, count2);
//	return 0;
//}
//
////网购
//int main()
//{
//    float p = 0.0;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    while (~scanf("%f %d %d %d", &p, &m, &d, &flag))
//    {
//        if (m == 11 && d == 11)
//        {
//            p *= 0.7f;
//        }
//        if (m == 12 && d == 12)
//        {
//            p *= 0.8f;
//        }
//        if (((m == 11 && d == 11) || (m == 12 && d == 12)) && flag)
//        {
//            if ((p - 50) < 0)
//            {
//                p = 0.0f;
//            }
//            else {
//                {
//                    p -= 50;
//                }
//            }
//        }
//        printf("%.2f\n", p);
//    }
//    return 0;
//}
//
////牛牛的快递
//int main()
//{
//    float a = 0.0;
//    char b = 0;
//    while (~scanf("%f %c", &a, &b))
//    {
//        int p = 20;
//        while (a > 0)
//        {
//            if (a > 1)
//            {
//                p += 1;
//            }
//            a--;
//        }
//        if (b == 'y')
//        {
//            p += 5;
//        }
//        printf("%d", p);
//    }
//    return 0;
//}
//
////牛牛的通勤
//int main()
//{
//    int l = 0;
//    while (~scanf("%d", &l))
//    {
//        if ((l / 1) < (10 + l / 10))
//        {
//            printf("w\n");
//        }
//        else
//        {
//            printf("v\n");
//        }
//    }
//    return 0;
//}