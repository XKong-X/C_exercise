#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//������ 02.04. �ָ�����
struct ListNode {
    int val;
    struct ListNode* next;
};

typedef struct ListNode ListNode;
struct ListNode* partition(struct ListNode* head, int x) {
    ListNode* pSmall = (ListNode*)malloc(sizeof(ListNode));
    ListNode* pSmallHead = pSmall;
    ListNode* pLarge = (ListNode*)malloc(sizeof(ListNode));
    ListNode* pLargeHead = pLarge;

    //���������
    while (head != NULL) {
        if (head->val < x) {
            pSmall->next = head;
            pSmall = pSmall->next;
        }
        else {
            pLarge->next = head;
            pLarge = pLarge->next;
        }
        head = head->next;
    }

    //�ϲ�
    pLarge->next = NULL;
    pSmall->next = pLargeHead->next;
    //pLarge->next = NULL;//���ÿջᱨ��

    return pSmallHead->next;
}