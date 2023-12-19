#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//—Ó œæÿ’Û
int IsExist(int arr[3][3], int n)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == n)
				return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	while (scanf("%d", &n) != EOF)
	{
		if (IsExist(arr,n))
			printf("¥Ê‘⁄\n");
		else
			printf("≤ª¥Ê‘⁄\n");
	}
	return 0;
}