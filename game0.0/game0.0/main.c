#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("***********************\n");
	printf("******   1.play   *****\n");
	printf("******   0.exit   *****\n");
	printf("***********************\n");
}

void game()
{
	int num = rand()%100 + 1;
	int count = 8;
	while (count)
	{
		printf("你还有%d次机会\n",count);
		printf("请输入数字（1-100）：>\n");
		int n;
		scanf("%d", &n);
		if (n <= 0 || n > 100)
		{
			printf("输入范围错误，请输入1-100范围内的数!\n");
		}
		else if (n < num)
		{
			printf("猜小了！\n");
		}
		else if (n > num)
		{
			printf("猜大了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
		count--;
	}
	if (count == 0)
		printf("你用完了所有机会，游戏失败！随机数为%d！\n",num);
}

int main()
{
	srand((unsigned int)time(NULL));
	char input;
	do
	{
		menu();
		printf("请选择:>");
		input = getchar();
		getchar();//清空缓存区
		switch (input)
		{
			case '1':
				printf("游戏开始！\n");
				game();
				break;
			case '0':
				input = '0';
				printf("成功退出游戏！\n");
				break;
			default:
				printf("输入错误，请重新输入！\n");
				break;
		}
	} while (input!='0');
	return 0;
}