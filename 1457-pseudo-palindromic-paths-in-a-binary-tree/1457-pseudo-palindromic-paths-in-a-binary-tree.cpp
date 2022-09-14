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
public:int ans = 0;
     unordered_map<int, int> um;
    void helper(TreeNode* root){
        if(root==NULL) return ;
        um[root->val]++;
        if(root->left==NULL && root->right==NULL)
        {
            int temp=0;
            for(int i=0; i<=9; i++)
            {
                if(um[i]%2!=0) 
                   temp++;
                }
            if(temp<=1) ans++;
        }
         helper(root->left);
    helper(root->right);
    um[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        helper(root);
        return ans;
    }
};