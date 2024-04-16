#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

//��������Ľڵ�
typedef struct SListNode {
	int data;
	struct SListNode* next;
}SLNode;

//��ӡ
void SLPrint(SLNode* phead);
//β��
void SLPushBack(SLNode** pphead, SLDataType val);
//ͷ��
void SLPushFront(SLNode** pphead, SLDataType val);
//βɾ
void SLPopBack(SLNode** pphead);
//ͷɾ
void SLPopFront(SLNode** pphead);
//����
SLNode* SLFind(SLNode* phead, SLDataType val);
//posλ��֮ǰ��������
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType val);
//posλ��֮���������
void SLInsertAfter(SLNode* pos, SLDataType val);
//ɾ��pos�ڵ�
void SLErase(SLNode** pphead, SLNode* pos);
//ɾ��pos֮��Ľڵ�
void SLEraseAfter(SLNode* pos);
//��������
void SListDesTroy(SLNode** pphead);