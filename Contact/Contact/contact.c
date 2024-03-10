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

////静态版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->sz = 0;
//}

int CheckMaxsz(Contact* pc);

void LoadContact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//读数据
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		if (0 == CheckMaxsz(pc))
			return;
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}

//动态版本
void InitContact(Contact* pc)
{
	assert(pc);
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->maxsz = DEFAULT_SZ;

	//加载上次保存的数据
	LoadContact(pc);
}

////静态版本
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	//判断联系人是否已满
//	if (pc->sz == MAX)
//	{
//		printf("联系人已满！\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入住址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("添加联系人成功！\n");
//}

//动态版本
int CheckMaxsz(Contact* pc)
{
	if (pc->sz == pc->maxsz)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->maxsz + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("CheckMaxsz");
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->maxsz += INC_SZ;
			printf("增容成功！\n");
			return 1;
		}
	}
	return 1;
}
void AddContact(Contact* pc)
{
	assert(pc);
	//判断联系人是否已满
	if (0 == CheckMaxsz(pc))
		return;

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
	//判断通讯录是否为空
	if (pc->sz == 0)
	{
		printf("联系人为空，请先添加联系人！\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除联系人的名字:>");
	scanf("%s", name);
	//找
	int del = FindByName(pc, name);
	if (del == -1)
	{
		printf("要删除的联系人不存在！\n");
		return;
	}
	//删
	pc->data[del] = pc->data[pc->sz - 1];
	pc->sz--;
	printf("成功删除联系人！\n");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	//判断通讯录是否为空
	if (pc->sz == 0)
	{
		printf("联系人为空，请先添加联系人！\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	//找到就打印，找不到就直接返回
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的联系人不存在！\n");
		return;
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
	//判断通讯录是否为空
	if (pc->sz == 0)
	{
		printf("联系人为空，请先添加联系人！\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改联系人的名字:>");
	scanf("%s", name);
	//找到就打印，找不到就直接返回
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的联系人不存在！\n");
		return;
	}
	else
	{
		printf("请输入修改后的名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入修改后的年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入修改后的性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入修改后的电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入修改后的住址:>");
		scanf("%s", pc->data[pos].addr);

		printf("修改联系人成功！\n");
	}
}

//动态版本才需要
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->maxsz = 0;
}

void SaveContact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//写数据
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
