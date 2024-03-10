#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////BC159 兔子的序列
//#include <math.h>
//int SeqName(const int arr[], const int n)
//{
//    int name = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (((int)sqrt(arr[i]) != arr[i] / (int)sqrt(arr[i])) && name < arr[i])
//            name = arr[i];
//    }
//    return name;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[1000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    printf("%d", SeqName(arr, n));
//    return 0;
//}
//
////BC163 牛牛的替换
//int main()
//{
//    int n;
//    char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//    getchar();//处理缓存区的\n
//    char str[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        str[i] = getchar();
//        if (str[i] == a1)
//        {
//            if (a2 == a3)//当找到a1且a2=a3时，直接赋值为a4
//            {
//                str[i] = a4;
//                break;
//            }
//            else
//                str[i] = a2;
//        }
//        else if (str[i] == a3)
//            str[i] = a4;
//    }
//    printf("%s", str);
//    return 0;
//}
//
////BC164 牛牛的四叶玫瑰数
//#include <math.h>
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    for (int i = l; i <= r; i++)
//    {
//        int tmp = i;
//        int sum = 0;
//        while (tmp)
//        {
//            sum += pow(tmp % 10, 4);
//            tmp /= 10;
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}
//
////BC166 小乐乐走台阶
//int Tts(int n)
//{
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 2;
//    else
//        return Tts(n - 1) + Tts(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", Tts(n));
//    return 0;
//}
//
////BC168 牛牛的西格玛
//int Sigma(int n)
//{
//    if (n == 0)
//        return 0;
//    else
//        return Sigma(n - 1) + n;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", Sigma(n));
//    return 0;
//}
//
////BC170 牛牛的digit
//int Digit(int x, int i)
//{
//    if (i-- == 1)
//        return x % 10;
//    else
//        return x % 10 + Digit(x / 10, i) * 10;
//}
//int main()
//{
//    int x, i;
//    scanf("%d %d", &x, &i);
//    printf("%d", Digit(x, i));
//    return 0;
//}
//
////BC171 牛牛的Hermite多项式
//int Her(int n, int x)
//{
//    if (n == 0)
//        return 1;
//    else if (n == 1)
//        return 2 * n;
//    else if (n > 1)
//        return 2 * x * Her(n - 1, x) - 2 * (n - 1) * Her(n - 2, x);
//    else//用来过编译，不进入运算
//        return -1;
//}
//int main()
//{
//    int n, x;
//    scanf("%d %d", &n, &x);
//    printf("%d", Her(n, x));
//    return 0;
//}
//
//
//BC169 牛牛的Ackmann(没啥价值的傻波一题目(给的条件是错的))
int ack(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ack(m - 1, 1);
    else if (m > 0 && n > 0)
        return ack(m - 1, ack(m, n - 1));
    else
        return -1;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", ack(m, n));
    return 0;
}