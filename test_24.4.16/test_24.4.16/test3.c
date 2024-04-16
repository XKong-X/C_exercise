#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//876. 链表的中间结点
struct ListNode {
    int val;
    struct ListNode* next;
};

void main() {

}

struct ListNode* middleNode(struct ListNode* head) {
    //快慢指针法
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    //fast->next != NULL包括了只有一个节点的情况
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}