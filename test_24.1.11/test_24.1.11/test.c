#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////在杨氏矩阵中查找某个数字是否存在(要求：时间复杂度小于O(N))
//void search(int arr[3][3], int* px, int* py, int num)
//{
//	int x = 0;
//	int y = *py -1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < num)
//		{
//			x++;
//		}
//		else if (arr[x][y] > num)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int num;
//	scanf("%d", &num);
//	int x = 3;
//	int y = 3;
//	
//	search(arr, &x, &y, num);
//
//	if (x == -1 && y == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为：%d %d\n", x, y);
//	return 0;
//}
//
//实现一个函数，可以左旋字符串中的k个字符
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void TurnLeftStr(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//	//左边逆序
//	reverse(str, str + k - 1);
//	//右边逆序
//	reverse(str + k, str + len - 1);
//	//整体逆序
//	reverse(str, str + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	TurnLeftStr(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串(是则返回1，否则返回0)
#include <string.h>
#include <assert.h>
void reverse(char* left, char* right)
{
	assert(left && right);
	char tmp = *left;
	*left = *right;
	*right = tmp;
	left++;
	right--;
}
int IsStrMove(char* str1, char* str2)
{
	int len = strlen(str1);
	int k = 0;
	while (k < len)
	{
		reverse(str1, str1 + k);
		k++;
		if (strcmp(str1, str2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "ABCD";
	char arr2[] = "dABC";
	int ret = IsStrMove(arr1, arr2);
	if (ret)
		printf("是\n");
	else
		printf("否\n");
	return 0;
}