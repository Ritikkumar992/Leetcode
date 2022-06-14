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
    void helper(TreeNode* root, vector<string>&ans, string cur)
    {
        if(!root)
            return;
        if(root->left || root->right)
            cur += (to_string(root->val) + "->");
        else{
            cur += to_string(root->val);
            ans.push_back(cur);
        }
        helper(root->left, ans,cur);
        helper(root->right, ans,cur);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string cur = "";
        helper(root,ans,cur);
        return ans;
    }
};