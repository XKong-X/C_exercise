#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("������:>");
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
			//�����ֳ���
			
			//�������С

			break;
		case exit:
			printf("�˳�ͨѶ¼��\n");
			break;
		default :
			printf("����Ƿ������������룡\n");
			break;

		}
	} while (input);
	return 0;
}