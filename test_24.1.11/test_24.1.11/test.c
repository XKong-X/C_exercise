#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����Ͼ����в���ĳ�������Ƿ����(Ҫ��ʱ�临�Ӷ�С��O(N))
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
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±�Ϊ��%d %d\n", x, y);
	return 0;
}