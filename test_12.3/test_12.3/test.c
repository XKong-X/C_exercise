#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��һά���顿����10����������ƽ��ֵ
//int main()
//{
//	int sum = 0;
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%lf", sum / 10.0);
//	return 0;
//}
//
////ת�þ���
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    //��n*m����
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //ת�ô�ӡ
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
////��һά���顿��������
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	//��ӡ��齻���Ƿ���ȷ
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}