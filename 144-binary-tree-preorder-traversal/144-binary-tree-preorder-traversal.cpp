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
    //Preorder -> root -> left -> right;
    void dfs(TreeNode* root, vector<int>& preorder)
    {
        if(root == NULL)
            return;
        preorder.push_back(root->val);
        dfs(root->left, preorder);
        dfs(root->right, preorder);
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        //Approach_01: Using Recurison : Time:O(n) and Space:O(n)
        vector<int> preorder;
        dfs(root, preorder);
        return preorder;
    }
};