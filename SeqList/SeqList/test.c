#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//void SLTest01() {
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPushBack(&sl, 5);
//	SLInsert(&sl, 3, 99);
//	SLInsert(&sl, sl.size, 99);
//	SLPrint(sl);
//	SLDestroy(&sl);
//}

//void ContactTest() {
//	Contact con;
//	ContactInit(&con);
//
//	ContactAdd(&con);
//	ContactAdd(&con);
//
//	ContactModify(&con);
//
//	ContactFind(&con);
//
//	ContactShow(&con);
//
//	ContactDel(&con);
//	ContactShow(&con);
//	ContactDel(&con);
//	ContactShow(&con);
//
//	ContactDestory(&con);
//}

void main() {
	int input = -1;
	Contact con;
	ContactInit(&con);
	do {
		menu();
		printf("请选择您的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactFind(&con);
			break;
		case 4:
			ContactModify(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("退出通讯录！");
			break;
		default:
			break;
		}
	} while (input != 0);
	ContactDestory(&con);
}