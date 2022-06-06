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
    //Postorder -> left -> right-> root;
    void dfs(TreeNode* root, vector<int>&postorder)
    {
        if(root == NULL)
            return;
        dfs(root->left, postorder);
        dfs(root->right,postorder);
        postorder.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        //Approach_01: Using Recursion: Time:O(n) and Space:O(n)
        vector<int> postorder;
        dfs(root, postorder);
        return postorder;
    }
};