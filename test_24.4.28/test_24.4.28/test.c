#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//NC132 ���������Լɪ������
typedef struct ListNode ListNode;
struct ListNode {
    int val;
    ListNode* next;
};

//�����ڵ�
ListNode* createNode(int num) {
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    if (node == NULL) {
        exit(1);
    }
    node->val = num;
    node->next = NULL;
    return node;
}
//���ڵ����ӳɻ�
ListNode* createLoop(int n) {
    //����ͷ�ڵ�
    ListNode* phead = createNode(1);
    ListNode* pcur = phead;

    for (int i = 2; i <= n; ++i) {
        pcur->next = createNode(i);
        pcur = pcur->next;
    }

    //����β�ڵ�
    pcur->next = phead;
    return phead;
}
int ysf(int n, int m) {
    ListNode* prev = createLoop(n);
    ListNode* pcur = prev;
    int count = 1;
    while (pcur != pcur->next) {

        if (count == m) {
            prev->next = pcur->next;
            free(pcur);
            pcur = prev->next;
            //prev = pcur;
            count = 1;
        }
        else {
            ++count;
            prev = pcur;
            pcur = pcur->next;
        }

    }
    int ret = pcur->val;
    free(pcur);
    //free(prev);//prev �� pcur ָ��һ���ڵ�
    prev = NULL;
    pcur = NULL;
    return ret;
}