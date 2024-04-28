#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//面试题 02.04. 分割链表
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

    //将链表分组
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

    //合并
    pLarge->next = NULL;
    pSmall->next = pLargeHead->next;
    //pLarge->next = NULL;//后置空会报错

    return pSmallHead->next;
}