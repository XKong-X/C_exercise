#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//在杨氏矩阵中查找某个数字是否存在(要求：时间复杂度小于O(N))
void search(int arr[3][3], int* px, int* py, int num)
{
	int x = 0;
	int y = *py -1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] < num)
		{
			x++;
		}
		else if (arr[x][y] > num)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return;
		}
	}
	*px = -1;
	*py = -1;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int num;
	scanf("%d", &num);
	int x = 3;
	int y = 3;
	
	search(arr, &x, &y, num);

	if (x == -1 && y == -1)
		printf("找不到\n");
	else
		printf("找到了，下标为：%d %d\n", x, y);
	return 0;
}