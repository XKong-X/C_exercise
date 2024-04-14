#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

//定义链表的节点
typedef struct SListNode {
	int data;
	struct SListNode* next;
}SLNode;

//打印
void SLPrint(SLNode* phead);
//尾插
void SLPushBack(SLNode** pphead, SLDataType val);
//头插
void SLPushFront(SLNode** pphead, SLDataType val);
//尾删
void SLPopBack(SLNode** pphead);
//头删
void SLPopFront(SLNode** pphead);