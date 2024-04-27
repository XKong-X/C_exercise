#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//21. 合并两个有序链表
struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // //方法一
    // if (list1 == NULL) {
    //     return list2;
    // }
    // if (list2 == NULL) {
    //     return list1;
    // }
    // struct ListNode* head = NULL;
    // struct ListNode* tmp = NULL;
    // while (list1 != NULL && list2 != NULL) {
    //     if (list1->val <= list2->val) {
    //         if (head == NULL) {
    //             head = list1;
    //             tmp = list1;
    //         } else {
    //             tmp->next = list1;
    //             tmp = tmp->next;
    //         }
    //         list1 = list1->next;
    //     } else {
    //         if (head == NULL) {
    //             head = list2;
    //             tmp = list2;
    //         } else {
    //             tmp->next = list2;
    //             tmp = tmp->next;
    //         }
    //         list2 = list2->next;
    //     }
    // }
    // if (list1 != NULL) {
    //     tmp->next = list1;
    // }
    // if (list2 != NULL) {
    //     tmp->next = list2;
    // }
    // return head;

    //方法二
    typedef struct ListNode ListNode;
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }
    ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
    ListNode* head = tmp;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tmp->next = list1;
            tmp = tmp->next;
            list1 = list1->next;
        }
        else {
            tmp->next = list2;
            tmp = tmp->next;
            list2 = list2->next;
        }
    }
    if (list1 != NULL) {
        tmp->next = list1;
    }
    if (list2 != NULL) {
        tmp->next = list2;
    }
    ListNode* ret = head->next;
    free(head);
    head == NULL;
    tmp == NULL;
    return ret;
}