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
		printf("�㻹��%d�λ���\n",count);
		printf("���������֣�1-100����>\n");
		int n;
		scanf("%d", &n);
		if (n <= 0 || n > 100)
		{
			printf("���뷶Χ����������1-100��Χ�ڵ���!\n");
		}
		else if (n < num)
		{
			printf("��С�ˣ�\n");
		}
		else if (n > num)
		{
			printf("�´��ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
		count--;
	}
	if (count == 0)
		printf("�����������л��ᣬ��Ϸʧ�ܣ������Ϊ%d��\n",num);
}

int main()
{
	srand((unsigned int)time(NULL));
	char input;
	do
	{
		menu();
		printf("��ѡ��:>");
		input = getchar();
		getchar();//��ջ�����
		switch (input)
		{
			case '1':
				printf("��Ϸ��ʼ��\n");
				game();
				break;
			case '0':
				input = '0';
				printf("�ɹ��˳���Ϸ��\n");
				break;
			default:
				printf("����������������룡\n");
				break;
		}
	} while (input!='0');
	return 0;
}