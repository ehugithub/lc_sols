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
    int kthSmallest(TreeNode* root, int k) {
        int l = size(root->left);
        int r = size(root->right);
        if(k == l + 1) {
            return root->val;
        }

        else if(k < l + 1) {
            return kthSmallest(root->left, k);
        }

        else {
            return kthSmallest(root->right, k - l - 1);
        }
    }


    int size(TreeNode* root) {
        if(!root) {
            return 0;
        }

        else if (!root->left && !root->right) {
            return 1;
        }

        else if (!root->left) {
            return 1 + size(root->right);
        }

        else if (!root->right) {
            return 1 + size(root->left);
        }

        else {
            return 1 + size(root->left) + size(root->right);
        }
    }
};
