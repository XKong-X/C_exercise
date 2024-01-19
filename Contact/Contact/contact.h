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

//��ϵ����Ϣ
typedef struct PeoInof
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInof;

//ͨѶ¼
typedef struct Contact
{
	PeoInof data[MAX];
	int sz;
}Contact;

//��ӡ�˵�
void menu();
//��ʼ��
void InitContact(Contact* pc);
//�����ϵ��
void AddContact(Contact* pc);
//��ʾ������ϵ��
void ShowContact(const Contact* pc);
//ɾ����ϵ��
void DelContact(Contact* pc);
//������ϵ��
void SearchContact(Contact* pc);
//�޸���ϵ��
void ModfiyContact(Contact* pc);