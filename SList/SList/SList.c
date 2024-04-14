#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//��ӡ
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

//����ռ䴴���ڵ㲢����
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

//β��
void SLPushBack(SLNode** pphead, SLDataType val) {
	assert(pphead);
	SLNode* node = SLBuyNode(val);
	node->data = val;
	if (*pphead == NULL) { 
		*pphead = node;
		return;
	}
	
	SLNode* ptmp = *pphead;
	//��β�ڵ�
	while (ptmp->next != NULL) {
		ptmp = ptmp->next;
		if (ptmp == NULL) {
			break;
		}
	}
	ptmp->next = node;
}

//ͷ��
void SLPushFront(SLNode** pphead, SLDataType val) {
	assert(pphead);
	SLNode* node = SLBuyNode(val);
	node->next = *pphead;
	*pphead = node;
}

//βɾ
void SLPopBack(SLNode** pphead) {
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
		return;
	}
	SLNode* ptmp = *pphead;
	SLNode* cur = NULL;
	//��β�ڵ�
	while (ptmp->next != NULL) {
		cur = ptmp;
		ptmp = ptmp->next;
	}
	free(ptmp);
	ptmp = NULL;
	cur->next = NULL;
}

//ͷɾ
void SLPopFront(SLNode** pphead) {
	assert(pphead && *pphead);
}