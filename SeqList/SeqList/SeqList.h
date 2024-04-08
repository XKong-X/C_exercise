#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//¶¯Ì¬Ë³Ðò±í
typedef int SLdataType;
typedef struct SeqList {
	SLdataType* arr;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);

void SLDestroy(SL* ps);

void SLPrint(SL s);

void SLPushBack(SL* ps, SLdataType x);

void SLPushFront(SL* ps, SLdataType x);

void SLPopBack(SL* ps);

void SLPopFront(SL* ps);

void SLInsert(SL* ps, int pos, SLdataType x);

void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLdataType x);