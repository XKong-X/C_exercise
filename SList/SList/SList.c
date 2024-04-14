#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//打印
void SLPrint(SLNode* phead) {
	//assert(phead);
	if (phead == NULL) {
		printf("NULL");
		return;
	}
	SLNode* ptmp = phead;
	while (ptmp != NULL) {
		printf("%d ", ptmp->data);
		ptmp = ptmp->next;
	}
}

//申请空间创建节点并返回
SLNode* SLBuyNode(SLDataType val) {
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	if (node == NULL) {
		perror("malloc fail!");
		exit(1);
	}
	node->data = val;
	node->next = NULL;
	return node;
}

//尾插
void SLPushBack(SLNode** pphead, SLDataType val) {
	assert(pphead);
	SLNode* node = SLBuyNode(val);
	node->data = val;
	if (*pphead == NULL) { 
		*pphead = node;
		return;
	}
	
	SLNode* ptmp = *pphead;
	//找尾节点
	while (ptmp->next != NULL) {
		ptmp = ptmp->next;
		if (ptmp == NULL) {
			break;
		}
	}
	ptmp->next = node;
}

//头插
void SLPushFront(SLNode** pphead, SLDataType val) {
	assert(pphead);
	SLNode* node = SLBuyNode(val);
	node->next = *pphead;
	*pphead = node;
}

//尾删
void SLPopBack(SLNode** pphead) {
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
		return;
	}
	SLNode* ptmp = *pphead;
	SLNode* cur = NULL;
	//找尾节点
	while (ptmp->next != NULL) {
		cur = ptmp;
		ptmp = ptmp->next;
	}
	free(ptmp);
	ptmp = NULL;
	cur->next = NULL;
}

//头删
void SLPopFront(SLNode** pphead) {
	assert(pphead && *pphead);
}