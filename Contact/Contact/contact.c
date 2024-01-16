#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("************************************\n");
	printf("*****   1. Add     2. Del      *****\n");
	printf("*****   3. Search  4. Modify   *****\n");
	printf("*****   5. Show    6. Sort     *****\n");
	printf("*****   0. Exit                *****\n");
	printf("************************************\n");
}

void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}

void AddContact(Contact* pc)
{
	assert(pc);
	//�ж���ϵ���Ƿ�����
	if (pc->sz >= MAX)
	{
		printf("��ϵ��������\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�����ϵ�˳ɹ���\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	//��ӡ����
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

void DelContact(Contact* pc)
{

}