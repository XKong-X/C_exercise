#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define	MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum OPTION
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

//联系人信息
typedef struct PeoInof
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInof;

//通讯录
typedef struct Contact
{
	PeoInof data[MAX];
	int sz;
}Contact;

//打印菜单
void menu();
//初始化
void InitContact(Contact* pc);
//添加联系人
void AddContact(Contact* pc);
//显示所有联系人
void ShowContact(const Contact* pc);
//删除联系人
void DelContact(Contact* pc);
//查找联系人
void SearchContact(Contact* pc);
//修改联系人
void ModfiyContact(Contact* pc);