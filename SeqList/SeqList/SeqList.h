#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Contact.h"

//动态顺序表
//typedef int SLdataType;
typedef peoInfo SLdataType;
typedef struct SeqList {
	SLdataType* arr;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* ps);
//销毁
void SLDestroy(SL* ps);
//打印
void SLPrint(SL s);
//尾插
void SLPushBack(SL* ps, SLdataType x);
//头插
void SLPushFront(SL* ps, SLdataType x);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);
//指定位置插入
void SLInsert(SL* ps, int pos, SLdataType x);
//指定位置删除
void SLErase(SL* ps, int pos);
//查找指定数据（返回下标）
int SLFind(SL* ps, SLdataType x);