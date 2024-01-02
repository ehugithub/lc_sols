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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2) {
            if(!list1 && !list2) {
                return nullptr;
            }
            else if(!list1) {
                return list2;
            }
            return list1;
        }

        ListNode* head = new ListNode();

        if(list1->val < list2->val) {
            head->val = list1->val;
            list1 = list1->next;
        }
        else {
            head->val = list2->val;
            list2 = list2->next;
        }

        ListNode* cur = head;

        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                cur->next = list1;
                cur = cur->next;
                list1 = list1->next;
            }
            else {
                cur->next = list2;
                cur = cur->next;
                list2 = list2->next;
            }
        }

        if (list1 == nullptr) {
            cur->next = list2;
        }
        else {
            cur->next = list1;
        }
        return head;
        
    }
};

