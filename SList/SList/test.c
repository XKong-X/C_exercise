#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//void SListTest1() {
//	//�����ڵ�
//	SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
//	node1->data = 1;
//	SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
//	node2->data = 2;
//	SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
//	node3->data = 3;
//	SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
//	node4->data = 4;
//
//	//���ӽڵ�
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//
//	SLNode* phead = node1;
//	SLPrint(phead);
//}

void SListTest2() {
	SLNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLNode* find = SLFind(plist, 1);
	//SLInsert(&plist, find, 0);
	//SLPrint(plist);
	//find = SLFind(plist, 0);
	//SLErase(&plist, find);
	SLEraseAfter(find);
	SLPrint(plist);
	SListDesTroy(&plist);
	SLPrint(plist);
	
	//SLPushBack(&plist, 4);
	//SLPushFront(&plist, 0);
	//SLPopBack(&plist);
	
	//if (find != NULL) {
	//	printf("�ҵ���\n");
	//} else {
	//	printf("û�ҵ�\n");
	//}
	//SLPrint(plist);
	//SLPopFront(&plist);
	//SLPrint(plist);
}

void main() {
	//SListTest1();
	SListTest2();
}