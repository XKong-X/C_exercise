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

static int FindByName(Contact* pc, char name[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pc->sz == 0)
	{
		printf("��ϵ��Ϊ�գ����������ϵ�ˣ�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	//��
	int del = FindByName(pc, name);
	if (del == -1)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
		return;
	}
	//ɾ
	pc->data[del] = pc->data[pc->sz - 1];
	pc->sz--;
	printf("�ɹ�ɾ����ϵ�ˣ�\n");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pc->sz == 0)
	{
		printf("��ϵ��Ϊ�գ����������ϵ�ˣ�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	//�ҵ��ʹ�ӡ���Ҳ�����ֱ�ӷ���
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModfiyContact(Contact* pc)
{
	assert(pc);
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pc->sz == 0)
	{
		printf("��ϵ��Ϊ�գ����������ϵ�ˣ�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸���ϵ�˵�����:>");
	scanf("%s", name);
	//�ҵ��ʹ�ӡ���Ҳ�����ֱ�ӷ���
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		printf("�������޸ĺ������:>");
		scanf("%s", pc->data[pos].name);
		printf("�������޸ĺ������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������޸ĺ���Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("�������޸ĺ�ĵ绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������޸ĺ��סַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸���ϵ�˳ɹ���\n");
	}
}