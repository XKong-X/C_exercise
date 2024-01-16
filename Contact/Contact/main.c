#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			break;
		case search:
			break;
		case modify:
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			break;
		case exit:
			break;
		default :
			break;

		}

	} while (input);
	return 0;
}