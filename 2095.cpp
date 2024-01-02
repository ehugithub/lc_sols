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

// straightforward


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next || !head->next) {
            return nullptr;
        }

        int count = 0;

        ListNode* tmp = head;
        while(tmp != nullptr) {
            tmp = tmp->next;
            count++;
        }

        ListNode* ptr = head;
        ListNode* ptr2 = head->next;

        for(int i = 1; i < count/2; ++i){
            ptr = ptr2;
            ptr2 = ptr2->next;
        }

        ptr->next = ptr2->next; 

        return head;
        
    }
};
