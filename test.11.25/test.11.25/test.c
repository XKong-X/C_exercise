#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////�������кϲ�
// //����1�����Ƽ���
// int main() 
// {
//     int n=0;
//     int m=0;
//     scanf("%d %d",&n,&m);
//     int arr1[n];
//     int arr2[2000];
//     //ȡ����
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     //�ϲ�����
//     for(int i=0;i<n;i++)
//     {
//         arr2[m+i]=arr1[i];
//     }
//     //��������
//     for(int i=0;i<n+m;i++)
//     {
//         for(int j=0;j<n+m-i-1;j++)
//         {
//             if(arr2[j]>arr2[j+1])
//             {
//                 int tmp=arr2[j];
//                 arr2[j]=arr2[j+1];
//                 arr2[j+1]=tmp;
//             }
//         }
//     }
//     for(int i=0;i<n+m;i++)
//     {
//         printf("%d ",arr2[i]);
//     }
//     return 0;
// }
////����2���Ƽ���
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[2000];
//    //ȡ����
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = n; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //��������
//    for (int i = 0; i < n + m; i++)
//    {
//        for (int j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}