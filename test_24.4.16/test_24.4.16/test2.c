#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//206. ��ת����
struct ListNode {
    int val;
    struct ListNode* next;
};

void main() {

}

struct ListNode* reverseList(struct ListNode* head) {
    // //����1
    // if (head == NULL || head->next == NULL) {
    //     return head;
    // }
    // struct ListNode* ptmp = head->next;
    // head->next = NULL;//ͷ�ڵ�������β�ڵ㣬���head->nextҪ��ΪNULL
    // while (ptmp != NULL) {
    //     struct ListNode* ptmpNext = ptmp->next;//����ptmp����һ���ڵ�
    //     ptmp->next = head;
    //     head = ptmp;//����ͷ�ڵ�
    //    ptmp = ptmpNext;//����tmp
    // }
    // return head;

    //����2(��ָ�뷨)
    if (head == NULL) {
        return head;
    }
    struct ListNode* n1 = NULL;
    struct ListNode* n2 = head;
    struct ListNode* n3 = head->next;
    //n1��Ϊͷ�ڵ㷵�أ�n2��Ϊ�˳�ѭ����������n3����ΪNULL���Ӹ��ж���������ʹ�ÿ�ָ��
    while (n2 != NULL) {
        n2->next = n1;
        n1 = n2;
        n2 = n3;
        if (n3 != NULL) {
            n3 = n3->next;
        }
    }
    return n1;
}