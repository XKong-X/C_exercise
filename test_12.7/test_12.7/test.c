#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��n��ǰm��֮��(����n=2��m=5,��Sn=2+22+222+2222+22222=24690)
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int k = 0;
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		k = n + k * 10;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����nԪ�����Ժȶ�����ˮ
//int main()
//{
//	int money;
//	while (~scanf("%d", &money))
//	{
//		int drink = 0;
//		int empty = 0;
//		drink = money / 1;
//		empty = drink / 1;
//		while (empty >= 2)
//		{
//			drink += empty / 2;
//			empty = empty / 2 + empty % 2;
//		}
//		if (money > 0)
//			printf("%d\n", drink);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}
//
////�������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��,����ż��λ������ĺ�벿��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,9,8,7,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//	while (l < r)
//	{
//		//������ż�����ҵ���ͣ��
//		while (l < r && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//�������������ҵ���ͣ��
//		while (l < r && arr[r] % 2 == 0)
//		{
//			r--;
//		}
//		//����
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//			l++; r--;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}