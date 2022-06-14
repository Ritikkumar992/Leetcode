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
    int rangeSumBST(TreeNode* root, int low, int high) {
        //Approach_01: Using Inorder traversal;
        vector<int> inorder;
        dfs(root,inorder);
        int sum = 0;
        int i = 0, j= 0;
        for(i = 0;i<inorder.size();i++){
            if(inorder[i] == low)
                break;
        }
        for(j = 0;j<inorder.size();j++){
            if(inorder[j] == high)
                break;
        }
        for(int x = i;x<=j;x++){
            sum += inorder[x];
        }
        return sum;
    }
};