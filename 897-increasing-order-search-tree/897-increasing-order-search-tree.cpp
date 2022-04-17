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
    TreeNode* head = nullptr;
    TreeNode* prev = nullptr;
    void solve(TreeNode* root)
    {
        if(!root) return;
        solve(root->left);
        if(!head) {
            prev = head = root;
        }
        else {
            prev->right = root;
            prev->left = nullptr;
            prev = root;
        }
        solve(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        solve(root);
       // Nullifying the prev pointer to have consistent result
        prev->left = prev->right = nullptr;
        return head;
    }
};