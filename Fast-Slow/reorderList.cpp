class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* cur = slow->next;
        slow->next = nullptr;
        ListNode* next;
        while (cur) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur=next;
        }
        ListNode* left = head;
        cur = prev;
        while (cur) {
            ListNode* p1 = left->next;
            ListNode* p2 = cur->next;

            left->next = cur;
            cur->next = p1;

            left = p1;
            cur = p2;
        }
    }
};