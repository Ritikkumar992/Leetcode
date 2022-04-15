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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // using recursion:
        if(root == NULL)
            return NULL;
        // if the range is correct then checking both left and right.
        if(root -> val >= low && root -> val <= high){
            root->left = trimBST(root->left, low, high); // trim the left subtree.
            root->right = trimBST(root->right, low, high);// trim the right substree.
        }
        else if (root->val < low) {
            //if the root val is less than low then getting values from left will be even lower(binary tree rule) so we need to set the root to root.right;
            root = trimBST(root->right, low, high);
        } else if (root->val > high) {
            //if the root val is greater than high then getting values from right will be even higher(binary tree rule) so we need to the root to root.left.
            root = trimBST(root->left, low,high);
        }
        return root;
    }
};