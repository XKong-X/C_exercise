#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//找一组数中只出现一次的数
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	//对比的数的坐标
	for (int i = 0; i < sz; i++)
	{
		int count = 0;
		for (int j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (count == 1)
			printf("%d ", arr[i]);
	}
	return 0;
}