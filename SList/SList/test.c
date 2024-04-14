#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListTest1() {
	//创建节点
	SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
	node1->data = 1;
	SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
	node2->data = 2;
	SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
	node3->data = 3;
	SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
	node4->data = 4;

	//连接节点
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	SLNode* phead = node1;
	SLPrint(phead);
}

void SListTest2() {
	SLNode* plist = NULL;
	//SLPushBack(&plist, 1);
	//SLPushBack(&plist, 2);
	//SLPushBack(&plist, 3);
	//SLPushBack(&plist, 4);
	//SLPushFront(&plist, 0);
	SLPopBack(&plist);
	SLPrint(plist);
}

void main() {
	//SListTest1();
	SListTest2();
}