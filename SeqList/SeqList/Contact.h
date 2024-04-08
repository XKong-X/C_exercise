#pragma once

#define NAME_MAX 20
#define GRNDER_MAX 5
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct personInfo {
	char name[NAME_MAX];
	char gender[GRNDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
	int age;
}peoInfo;

typedef struct SeqList Contact;

//��ʼ��
void ContactInit(Contact* con);
//����
void ContactDestory(Contact* con);
//��
void ContactAdd(Contact* con);
//ɾ
void ContactDel(Contact* con);
//��
void ContactModify(Contact* con);
//��
void ContactFind(Contact* con);
//��ʾ����ͨѶ¼
void ContactShow(Contact* con);