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
//
////牛牛的金币
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int x1 = 0;
//    int y1 = 0;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    if ((y1 - y) > 0)
//    {
//        printf("u\n");
//    }
//    else if ((y1 - y) < 0)
//    {
//        printf("d\n");
//    }
//    if ((x1 - x) > 0)
//    {
//        printf("r\n");
//    }
//    else if ((x1 - x) < 0)
//    {
//        printf("l\n");
//    }
//    return 0;
//}
//
////HTTP状态码
//int main()
//{
//    int http = 0;
//    while (~scanf("%d", &http))
//    {
//        switch (http)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//
////计算单位阶跃函数
//int main()
//{
//    int t = 0;
//    while (~scanf("%d", &t))
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (t < 0)
//        {
//            printf("0\n");
//        }
//        else
//        {
//            printf("0.5\n");
//        }
//    }
//    return 0;
//}
//
////三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d", &a, &b, &c))
//    {
//        if ((a + b > c) && (b + c > a) && (a + c > b))
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}
//
////牛牛的计划
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    scanf("%d %d %d", &y, &m, &d);
//    int y1 = 0;
//    int m1 = 0;
//    int d1 = 0;
//    scanf("%d %d %d", &y1, &m1, &d1);
//    if (y1 > y)
//    {
//        printf("yes\n");
//    }
//    else if (y1 == y)
//    {
//        if (m1 > m)
//        {
//            printf("yes\n");
//        }
//        else if (m1 == m)
//        {
//            if (d1 >= d)
//            {
//                printf("yes\n");
//            }
//            else
//            {
//                printf("no\n");
//            }
//        }
//        else
//        {
//            printf("no\n");
//        }
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}
//
////计算一元二次方程
//#include <math.h>
//int main()
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    while (~scanf("%lf %lf %lf", &a, &b, &c))
//    {
//        double delta = pow(b, 2) - 4 * a * c;
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            if (delta > 0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
//            }
//            else if (delta < 0)
//            {
//                printf("x1=%.2lf%.2lfi;x2=%.2lf%+.2lfi\n", -b / (2 * a), -sqrt(-delta) / (2 * a), -b / (2 * a), sqrt(-delta) / (2 * a));
//            }
//            else
//            {
//                if (b / (2 * a) == 0)
//                {
//                    printf("x1=x2=0.00\n");
//                }
//                else
//                {
//                    printf("x1=x2=%.2lf\n", -b / (2 * a));
//                }
//            }
//        }
//    }
//    return 0;
//}