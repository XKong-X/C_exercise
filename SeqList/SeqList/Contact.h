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

//初始化
void ContactInit(Contact* con);
//销毁
void ContactDestory(Contact* con);
//增
void ContactAdd(Contact* con);
//删
void ContactDel(Contact* con);
//改
void ContactModify(Contact* con);
//查
void ContactFind(Contact* con);
//显示整个通讯录
void ContactShow(Contact* con);