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
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModfiyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			//按名字长度
			
			//按年龄大小

			break;
		case exit:
			printf("退出通讯录！\n");
			break;
		default :
			printf("坐标非法，请重新输入！\n");
			break;

		}
	} while (input);
	return 0;
}