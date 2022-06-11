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
    void dfs(TreeNode* node,vector<int>& inorder)
    {
        if(node == NULL)
            return;
        dfs(node->left, inorder);
        inorder.push_back(node->val);
        dfs(node->right, inorder);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        //Approach_01: Using IRecursive norder Technique: 
        // Time:O(n) and Space:O(n)
        vector<int> inorder;
        dfs(root, inorder);
        return inorder[k-1];
    }
};