#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC137 序列重组矩阵
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            //读一个数据马上打印，可以少写一个循环
//            scanf("%d", &arr[i][j]);
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC138 矩阵转置
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC139 矩阵交换
//void SwapRowCol(int arr[10][10], int n, int m, char t, int a, int b)
//{
//    if (t == 'r')//交换行(行不变，列数据依次交换)
//    {
//        for (int i = 0; i < m; i++)
//        {
//            int tmp = arr[a - 1][i];
//            arr[a - 1][i] = arr[b - 1][i];
//            arr[b - 1][i] = tmp;
//        }
//    }
//    else if (t == 'c')//交换列（列不变，行数据依次交换）
//    {
//        for (int i = 0; i < n; i++)
//        {
//            int tmp = arr[i][a - 1];
//            arr[i][a - 1] = arr[i][b - 1];
//            arr[i][b - 1] = tmp;
//        }
//    }
//}
//int main()
//{
//    int n, m, k, a, b;
//    char t;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    scanf("%d", &k);
//    while (k--)//控制交换次数
//    {
//        scanf("\n%c %d %d", &t, &a, &b);
//        SwapRowCol(arr, n, m, t, a, b);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC140 杨辉三角
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)//处理边上数据
//                arr[i][j] = 1;
//            if (i >= 2 && j >= 1)//处理中间数据
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//
//    //打印
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////BC142 扫雷
//size_t MineNum(const char board[1002][1002], const int  i, const int j)
//{
//    int count = 0;
//    for (int x = i - 1; x <= i + 1; x++)//限制横坐标
//    {
//        for (int y = j - 1; y <= j +1; y++)//限制纵坐标
//        {
//            if (board[x][y] == '*')
//                count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    char board[1002][1002] = { 0 };//多创建两行和两列
//
//    for (int i = 1; i <= n; i++)//空出最上和最下两行不使用，防止访问时越界
//    {
//        getchar();//处理缓存区残留的\n
//        for (int j = 1; j <= m; j++)//空出最左和最右两列不使用，防止访问时越界
//        {
//            scanf("%c", &board[i][j]);
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if(board[i][j] == '.')
//                board[i][j]=MineNum(board, i, j) + '0';
//        }
//    }
//    
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            printf("%c", board[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//BC157 素数回文
#include <math.h>
int IsPriNum(int num)
{
    int flag = 1;//假设是素数
    int tmp = num;
    int dig = 0;
    
    while (tmp)//求位数
    {
        tmp /= 10;
        dig++;
    }
    
    long long sum = num * pow(10, --dig);//4位数*1000，3位数*100...
    tmp = num / 10;//去掉不用变的个位数（变回文数后在中间）
    while (dig)//求回文数
    {
        sum += (tmp % 10) * pow(10, --dig);
        tmp /= 10;
    }

    //判断回文数是否为素数
    for (int i = 2; i <= sqrt(sum); i++)
    {
        if (sum % i == 0)
            return 0;
    }
    return flag;
}
int main()
{
    int pri_num;
    scanf("%d", &pri_num);
    if (IsPriNum(pri_num))
        printf("prime\n");
    else
        printf("noprime\n");
    return 0;
}