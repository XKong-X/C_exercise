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
	//判断联系人是否已满
	if (pc->sz >= MAX)
	{
		printf("联系人已满！\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加联系人成功！\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	//打印标题
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n","名字","年龄","性别","电话","地址");
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