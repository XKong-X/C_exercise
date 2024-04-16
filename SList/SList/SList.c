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
	printf("\n");
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
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//����
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

//posλ��֮ǰ��������
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType val) {
	assert(pphead && *pphead && pos);
	if (pos == *pphead) {
		SLPushFront(pphead, val);
		return;
	}
	//��pos��ǰһ���ڵ�
	SLNode* prev = *pphead;
	while (prev != NULL && prev->next != pos) {
		prev = prev->next;
	}
	if (prev == NULL) {
		printf("δ�ҵ�posλ��\n");
		return;
	}
	SLNode* node = SLBuyNode(val);
	node->next = pos;
	prev->next = node;
	
}

//posλ��֮���������
void SLInsertAfter(SLNode* pos, SLDataType val) {
	assert(pos);
	SLNode* node = SLBuyNode(val);
	node->next = pos->next;
	pos->next = node;
}

//ɾ��pos�ڵ�
void SLErase(SLNode** pphead, SLNode* pos) {
	assert(pphead && *pphead && pos);
	if (*pphead == pos) {
		SLPopFront(pphead);
		return;
	}
	//��pos��ǰһ���ڵ�
	SLNode* prev = *pphead;
	while (prev != NULL && prev->next != pos) {
		prev = prev->next;
	}
	if (prev == NULL) {
		printf("δ�ҵ�posλ��\n");
		return;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}

//ɾ��pos֮��Ľڵ�
void SLEraseAfter(SLNode* pos) {
	assert(pos && pos->next);
	SLNode* tmp = pos->next;
	pos->next = tmp->next;
	free(tmp);
	tmp = NULL;
}

//��������
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