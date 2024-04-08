#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//��ʼ��
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//����
void SLDestroy(SL* ps) {
	if (ps->arr) {
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//��ӡ
void SLPrint(SL s) {
	for (int i = 0; i < s.size; ++i) {
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//�жϿռ乻����������������
void SLCheckCapacity(SL* ps) {
	assert(ps);
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : (2 * ps->capacity);
		SLdataType* tmp = (SLdataType*)realloc(ps->arr, newCapacity * sizeof(SLdataType));
		//�ж�����ռ��Ƿ�ɹ�
		if (tmp == NULL) {
			perror("realloc fail!");
			exit(1);//�쳣�˳�
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//ͷ��
void SLPushBack(SL* ps, SLdataType x) {
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps ->size++] = x;
}

//β��
void SLPushFront(SL* ps, SLdataType x) {
	assert(ps);
	SLCheckCapacity(ps);
	//�ƶ�����
	for (int i = ps->size - 1; i >= 0; --i) {
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = x;
	++ps->size;
}

//ͷɾ
void SLPopBack(SL* ps) {
	assert(ps);
	assert(ps->size);
	--ps->size;
}

//βɾ
void SLPopFront(SL* ps) {
	assert(ps);
	assert(ps->size);
	//�ƶ�����
	for (int i = 0; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}

//ָ��λ�ò�������
void SLInsert(SL* ps, int pos, SLdataType x) {
	assert(ps);
	assert(ps->size >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > pos; --i) {
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	++ps->size;
}

//ɾ��ָ��λ�õ�����
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(ps->size >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}

//����ָ�����ݣ������±꣩
int SLFind(SL* ps, SLdataType x) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		if (ps->arr[i] == x) {
			return i;
		}
	}
	return -1;//δ��ʼ��ʱ��Ĭ��ֵ
}