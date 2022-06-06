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
    vector<int> inorderTraversal(TreeNode* root) {
        //Morris Traversal:
        vector<int> res;
        TreeNode* curr = root;
        TreeNode* pre;
        
         while (curr != NULL) {
            if (curr->left == NULL) {
                res.push_back(curr->val);
                curr = curr->right; // move to next right node
            } else { // has a left subtree
                pre = curr->left;
                while (pre->right != NULL) { // find rightmost
                    pre = pre->right;
                }
                pre->right = curr; // put cur after the pre node
                TreeNode* temp = curr; // store cur node
                curr = curr->left; // move cur to the top of the new tree
                temp->left = NULL; // original cur left be null, avoid infinite loops
            }
        }
        return res;
    }
};