#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//初始化
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//销毁
void SLDestroy(SL* ps) {
	if (ps->arr) {
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//打印
void SLPrint(SL s) {
	for (int i = 0; i < s.size; ++i) {
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//判断空间够不够，不够就扩容
void SLCheckCapacity(SL* ps) {
	assert(ps);
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : (2 * ps->capacity);
		SLdataType* tmp = (SLdataType*)realloc(ps->arr, newCapacity * sizeof(SLdataType));
		//判断申请空间是否成功
		if (tmp == NULL) {
			perror("realloc fail!");
			exit(1);//异常退出
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//头插
void SLPushBack(SL* ps, SLdataType x) {
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps ->size++] = x;
}

//尾插
void SLPushFront(SL* ps, SLdataType x) {
	assert(ps);
	SLCheckCapacity(ps);
	//移动数据
	for (int i = ps->size - 1; i >= 0; --i) {
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = x;
	++ps->size;
}

//头删
void SLPopBack(SL* ps) {
	assert(ps);
	assert(ps->size);
	--ps->size;
}

//尾删
void SLPopFront(SL* ps) {
	assert(ps);
	assert(ps->size);
	//移动数据
	for (int i = 0; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}

//指定位置插入数据
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

//删除指定位置的数据
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(ps->size >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}

//查找指定数据（返回下标）
int SLFind(SL* ps, SLdataType x) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		if (ps->arr[i] == x) {
			return i;
		}
	}
	return -1;//未初始化时的默认值
}