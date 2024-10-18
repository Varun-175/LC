/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = NULL;
    struct ListNode* temp = head;
    struct ListNode* next;

    while(temp)
    {
        next = temp->next;
        temp->next = pre;
        pre = temp;
        temp = next;
    }
    return pre;
}