#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////������ɾ��ָ������(ֻ��ӡ�����洢)
//int main()
//{
//    int n, del;
//    scanf("%d", &n);
//    int arr[50];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
////ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//
////�ַ�����
//#include <string.h>
//int main()
//{
//	char ch[10001] = {0};
//	gets(ch);
//	//����
//	int l = 0;
//	int r = strlen(ch) - 1;
//	while (l < r)
//	{
//		int tmp = ch[l];
//		ch[l] = ch[r];
//		ch[r] = tmp;
//		l++; r--;
//	}
//	printf("%s", ch);
//	return 0;
//}