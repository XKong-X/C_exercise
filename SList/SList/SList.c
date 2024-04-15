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
	printf("\n");
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
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//查找
SLNode* SLFind(SLNode* phead, SLDataType val) {
	SLNode* ptmp = phead;
	while (ptmp != NULL) {
		if (ptmp->data == val) {
			return ptmp;
		}
		ptmp = ptmp->next;
	}
	return NULL;
}

//pos位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType val) {
	assert(pphead && *pphead && pos);
	if (pos == *pphead) {
		SLPushFront(pphead, val);
		return;
	}
	//找pos的前一个节点
	SLNode* prev = *pphead;
	while (prev != NULL && prev->next != pos) {
		prev = prev->next;
	}
	if (prev == NULL) {
		printf("未找到pos位置\n");
		return;
	}
	SLNode* node = SLBuyNode(val);
	node->next = pos;
	prev->next = node;
	
}

//pos位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType val) {
	assert(pos);
	SLNode* node = SLBuyNode(val);
	node->next = pos->next;
	pos->next = node;
}

//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos) {
	assert(pphead && *pphead && pos);
	if (*pphead == pos) {
		SLPopFront(pphead);
		return;
	}
	//找pos的前一个节点
	SLNode* prev = *pphead;
	while (prev != NULL && prev->next != pos) {
		prev = prev->next;
	}
	if (prev == NULL) {
		printf("未找到pos位置\n");
		return;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}

//删除pos之后的节点
void SLEraseAfter(SLNode* pos) {
	assert(pos && pos->next);
	SLNode* tmp = pos->next;
	pos->next = tmp->next;
	free(tmp);
	tmp = NULL;
}

//销毁链表
void SListDesTroy(SLNode** pphead) {
	assert(pphead && *pphead);
	SLNode* tmp = *pphead;
	while (tmp != NULL) {
		SLNode* next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*pphead = NULL;
}