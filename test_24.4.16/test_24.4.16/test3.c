#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//876. ������м���
struct ListNode {
    int val;
    struct ListNode* next;
};

void main() {

}

struct ListNode* middleNode(struct ListNode* head) {
    //����ָ�뷨
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    //fast->next != NULL������ֻ��һ���ڵ�����
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}