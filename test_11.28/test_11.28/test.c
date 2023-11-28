#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////牛牛的短信
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int num = 0;
//    double money = 0.0;
//    for (int i = n; i > 0; i--)
//    {
//        scanf("%d", &num);
//        money += num > 60 ? 0.2 : 0.1;
//    }
//    printf("%.1lf", money);
//    return 0;
//}
//
////牛牛的素数判断
//#include <math.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int num;
//    for (int i = n; i > 0; i--)
//    {
//        int flag = 1;
//        scanf("%d", &num);
//        //此处放1效果一致，且该程序无需判断num是否为1或2
//        if (flag)
//        {
//            int j;
//            for (j = 2; j < sqrt(num); j++)//j<num是未作优化的情况，j<num/2则是简单优化，j<sqrt(num)则是最佳优化
//            {
//                if (num % j == 0)
//                {
//                    printf("false\n");
//                    flag = 0;
//                    break;//非素数直接跳出当前循环
//                }
//            }
//            if (flag)
//                printf("true\n");
//        }
//    }
//    return 0;
//}