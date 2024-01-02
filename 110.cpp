/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) {
            return true;
        }

        cout << findHeight(root->left) << endl << findHeight(root->right);

        if(abs(findHeight(root->left) - findHeight(root->right)) <= 1) {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        else {
            return false;
        }
    }

    int findHeight(TreeNode* root) {
        if(!root) {
            return 0;
        }
        else if (!root->left) {
            return findHeight(root->right) + 1;
        }

        else if(!root->right) {
            return findHeight(root->left) + 1;
        }

        else {
            return max(findHeight(root->left), findHeight(root->right)) + 1;
        }
    }
};
