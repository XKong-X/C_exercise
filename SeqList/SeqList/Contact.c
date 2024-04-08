#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
#include "SeqList.h"

void menu() {
	printf("*************通讯录**************\n");
	printf("*********1.增加  2.删除**********\n");
	printf("*********3.查找  4.修改**********\n");
	printf("*********5.展示  0.退出**********\n");
	printf("*********************************\n");
}

//初始化通讯录（顺序表）
void ContactInit(Contact* con) {
	assert(con);
	SLInit(con);
}

//销毁通讯录（顺序表）
void ContactDestory(Contact* con) {
	assert(con);
	SLDestroy(con);
}

//获取联系人信息(姓名，性别，年龄，电话，地址)
void AcquireInfo(Contact* con, peoInfo* info) {
	printf("请输入姓名：");
	scanf("%s", info->name);

	printf("请输入性别：");
	scanf("%s", info->gender);

	printf("请输入年龄：");
	scanf("%d", &info->age);

	printf("请输入电话：");
	scanf("%s", info->tel);

	printf("请输入地址：");
	scanf("%s", info->addr);
}

//增
void ContactAdd(Contact* con) {
	assert(con);
	//获取联系人信息
	peoInfo info;
	printf("请输入要增加的联系人的信息！\n");
	AcquireInfo(con, &info);

	//把获取到的信息存入通讯录
	SLPushBack(con, info);
	printf("增加成功！\n");
}

int FindByName(Contact* con, char* name) {
	assert(con && name);
	for (int i = 0; i < con->size; ++i) {
		if (0 == strcmp(name, con->arr[i].name)) {
			return i;
		}
	}
	return -1;
}

//删
void ContactDel(Contact* con) {
	assert(con);
	//获取要删除的人的姓名
	char name[NAME_MAX];
	printf("请输入要删除的人的姓名：");
	scanf("%s", name);
	//判断是否找到
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("未找到联系人，删除失败！\n");
		return;
	}
	SLErase(con, findIndex);
	printf("删除成功！\n");
}

//改
void ContactModify(Contact* con) {
	assert(con);
	//获取要修改的人的姓名
	char name[NAME_MAX];
	printf("请输入要修改的人的姓名：");
	scanf("%s", name);
	//判断是否找到
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("未找到联系人，修改失败！\n");
		return;
	}
	//获取修改后的联系人的信息
	peoInfo info;
	printf("请输入修改后的信息！\n");
	AcquireInfo(con, &info);
	con->arr[findIndex] = info;
	printf("修改成功！\n");
}

//查
void ContactFind(Contact* con) {
	assert(con);
	//获取要查找的人的姓名
	char name[NAME_MAX];
	printf("请输入要查找的人的姓名：");
	scanf("%s", name);
	//判断是否找到
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("未找到联系人！\n");
		return;
	}
	printf("找到联系人,信息如下：\n");
	printf("============================\n");
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%s %s %d %s %s\n", 
		con->arr[findIndex].name,
		con->arr[findIndex].gender,
		con->arr[findIndex].age,
		con->arr[findIndex].tel,
		con->arr[findIndex].addr);
	printf("============================\n");
}

//显示整个通讯录
void ContactShow(Contact* con) {
	assert(con);
	printf("============================\n");
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < con->size; ++i) {
		printf("%s %s %d %s %s\n", 
			con->arr[i].name, 
			con->arr[i].gender,
			con->arr[i].age, 
			con->arr[i].tel, 
			con->arr[i].addr);
	}
	printf("============================\n");
}