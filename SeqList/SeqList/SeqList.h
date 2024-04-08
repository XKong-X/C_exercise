#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Contact.h"

//��̬˳���
//typedef int SLdataType;
typedef peoInfo SLdataType;
typedef struct SeqList {
	SLdataType* arr;
	int size;
	int capacity;
}SL;

//��ʼ��
void SLInit(SL* ps);
//����
void SLDestroy(SL* ps);
//��ӡ
void SLPrint(SL s);
//β��
void SLPushBack(SL* ps, SLdataType x);
//ͷ��
void SLPushFront(SL* ps, SLdataType x);
//βɾ
void SLPopBack(SL* ps);
//ͷɾ
void SLPopFront(SL* ps);
//ָ��λ�ò���
void SLInsert(SL* ps, int pos, SLdataType x);
//ָ��λ��ɾ��
void SLErase(SL* ps, int pos);
//����ָ�����ݣ������±꣩
int SLFind(SL* ps, SLdataType x);