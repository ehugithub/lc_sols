/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(!head || !head->next) {
            return false;
        }

        ListNode* cur = head;
        unordered_map<ListNode*, int> m;

        while(cur->next) {
            cout << cur->val << " " << cur << endl;
            if(m.find(cur) != m.end()) {
                return true;
            }
            else {
                m[cur] = cur->val;
            }
            cur = cur->next;
        }

        return false;
    }
};
