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
    void dfs(TreeNode* root, vector<int>&inorder)
    {
        if(root == NULL)
            return;
        dfs(root->left,inorder);
        inorder.push_back(root->val);
        dfs(root->right,inorder);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //approach_01:using recursion: Time:O(n) and Space:O(n)
        vector<int> inorder;
        dfs(root,inorder);
        return inorder;
    }
};