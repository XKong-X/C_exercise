#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//203. �Ƴ�����Ԫ��
struct ListNode {
    int val;
    struct ListNode* next;
};

void main() {

}

struct ListNode* removeElements(struct ListNode* head, int val) {
    // //����1
    // if (head == NULL) {
    //     return head;
    // }
    // struct ListNode* tmp = head->next;//����ͷ�ڵ��жϣ��ں��洦��
    // struct ListNode* prev = head;
    // while (tmp != NULL) {
    //     if (tmp->val == val) {
    //         prev->next = tmp->next;
    //         free(tmp);
    //         tmp = prev->next;;

    //     } else {
    //         prev = tmp;
    //         tmp = tmp->next;
    //     }
    // }
    // //val��ͷ�ڵ����ͷɾ
    // if (head->val == val) {
    //     tmp = head->next;
    //     free(head);
    //     head = tmp;
    // }
    // tmp = NULL;
    // prev = NULL;
    // return head;

    //����2
    //����������
    struct ListNode* newHead = NULL;
    struct ListNode* newTail = NULL;

    struct ListNode* tmp = head;
    while (tmp != NULL) {
        if (tmp->val != val) {
            if (newHead != NULL) {
                newTail->next = tmp;
                newTail = newTail->next;
            }
            else {
                newHead = newTail = tmp;
            }
        }
        tmp = tmp->next;
    }
    if (newTail != NULL) {
        newTail->next = NULL;
    }
    tmp = NULL;
    return newHead;
}