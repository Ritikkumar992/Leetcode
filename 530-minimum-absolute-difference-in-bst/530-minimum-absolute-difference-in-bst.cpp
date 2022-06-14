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
    void dfs(TreeNode* root, vector<int>& inorder)
    {
        if(root == NULL)
            return;
        dfs(root->left, inorder);
        inorder.push_back(root->val);
        dfs(root->right, inorder);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> inorder;
        dfs(root, inorder);
        int mn = inorder[1]-inorder[0];
        for(int i = 0;i<inorder.size()-1;i++){
            mn = min(mn, inorder[i+1]-inorder[i]);
        }
        return mn;
    }
};