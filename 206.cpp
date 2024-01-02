/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) {
            return head;
        }
        ListNode* cur = head;
        ListNode* p1 = head->next;
        ListNode* p2 = head->next->next;
        if(!p2) {
            head->next = nullptr;
            p1->next = head;
            return p1;
        }

        cur->next = nullptr;

        while(p2 != nullptr) {
            p1->next = cur;
            cur = p1;
            p1 = p2;
            p2 = p2->next;
        }

        p1->next = cur;

        return p1;

    }
};
