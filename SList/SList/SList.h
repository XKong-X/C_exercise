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
//查找
SLNode* SLFind(SLNode* phead, SLDataType val);
//pos位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType val);
//pos位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType val);
//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos);
//删除pos之后的节点
void SLEraseAfter(SLNode* pos);
//销毁链表
void SListDesTroy(SLNode** pphead);