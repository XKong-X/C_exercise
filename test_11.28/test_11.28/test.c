#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////ţţ�Ķ���
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
////ţţ�������ж�
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
//        //�˴���1Ч��һ�£��Ҹó��������ж�num�Ƿ�Ϊ1��2
//        if (flag)
//        {
//            int j;
//            for (j = 2; j < sqrt(num); j++)//j<num��δ���Ż��������j<num/2���Ǽ��Ż���j<sqrt(num)��������Ż�
//            {
//                if (num % j == 0)
//                {
//                    printf("false\n");
//                    flag = 0;
//                    break;//������ֱ��������ǰѭ��
//                }
//            }
//            if (flag)
//                printf("true\n");
//        }
//    }
//    return 0;
//}