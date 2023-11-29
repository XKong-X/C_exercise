#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////¾®×ÖÆå
//char tic_alg(char tic[3][3])
//{
//    char flag = 'O';
//    for (int i = 0; i < 3; i++)
//    {
//        //ÅÐ¶ÏºáÅÅ
//        if (tic[i][0] == tic[i][1] && tic[i][1] == tic[i][2])
//        {
//            if (tic[i][1] != 'O')
//            {
//                flag = tic[i][1];
//                break;
//            }
//        }
//        //ÅÐ¶ÏÊúÅÅ
//        if (tic[0][i] == tic[1][i] && tic[1][i] == tic[2][i])
//        {
//            if (tic[i][1] != 'O')
//            {
//                flag = tic[1][i];
//                break;
//            }
//        }
//    }
//    //ÅÐ¶Ï¶Ô½ÇÏß
//    if ((tic[0][0] == tic[1][1] && tic[1][1] == tic[2][2]) || (tic[2][0] == tic[1][1] && tic[1][1] == tic[0][2]))
//    {
//        if (tic[1][1] != 'O')
//        {
//            flag = tic[1][1];
//        }
//    }
//    return flag;
//}
//int main()
//{
//    char tic[3][3] = {0};
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf(" %c", &tic[i][j]);
//        }
//    }
//    char ret = tic_alg(tic);
//    if ('K' == ret)
//    {
//        printf("KiKi wins!\n");
//    }
//    else if ('B' == ret)
//    {
//        printf("BoBo wins!\n");
//    }
//    else
//    {
//        printf("No winner!\n");
//    }
//    return 0;
//}