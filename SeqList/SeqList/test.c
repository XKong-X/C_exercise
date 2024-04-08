#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLTest01() {
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLInsert(&sl, 3, 99);
	SLInsert(&sl, sl.size, 99);
	SLPrint(sl);
	SLDestroy(&sl);
}

void main() {
	SLTest01();
}