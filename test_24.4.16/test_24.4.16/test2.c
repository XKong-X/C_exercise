#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//206. 反转链表
struct ListNode {
    int val;
    struct ListNode* next;
};

void main() {

}

struct ListNode* reverseList(struct ListNode* head) {
    // //方法1
    // if (head == NULL || head->next == NULL) {
    //     return head;
    // }
    // struct ListNode* ptmp = head->next;
    // head->next = NULL;//头节点最后会变成尾节点，因此head->next要置为NULL
    // while (ptmp != NULL) {
    //     struct ListNode* ptmpNext = ptmp->next;//保存ptmp的下一个节点
    //     ptmp->next = head;
    //     head = ptmp;//更新头节点
    //    ptmp = ptmpNext;//更新tmp
    // }
    // return head;

    //方法2(三指针法)
    if (head == NULL) {
        return head;
    }
    struct ListNode* n1 = NULL;
    struct ListNode* n2 = head;
    struct ListNode* n3 = head->next;
    //n1作为头节点返回；n2作为退出循环的条件；n3最先为NULL，加个判断条件避免使用空指针
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