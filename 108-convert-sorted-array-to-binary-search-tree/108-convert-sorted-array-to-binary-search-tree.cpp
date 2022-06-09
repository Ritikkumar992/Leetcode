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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //Using Middle Pointer:
        if(nums.size() == 0)
            return NULL;
        if(nums.size() == 1)
            return new TreeNode(nums[0]);
        int middle = nums.size()/2;
        TreeNode* root = new TreeNode(nums[middle]);
        
        vector<int> leftPart(nums.begin(),nums.begin()+middle);
        vector<int>rightPart(nums.begin()+middle+1,nums.end());
        
        root->left = sortedArrayToBST(leftPart);
        root->right = sortedArrayToBST(rightPart);
        
        return root;
    }
};