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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //Using Queue: Time:O(n) and Space:O(n)
        // creating a vector of vector to store the res;
        vector<vector<int>> result;
        if (root == NULL) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;

        while ( !q.empty()) { // traverse untile queue is not empty
            int n = q.size();
            vector<int> row(n);
            // traversing through the row vector.
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                // find position to fill node's value
                int index = (flag) ? i : (n - 1 - i);

                row[index] = node->val; // putting the element at the index of row 
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            // after this level
            flag = !flag; // toggling the value of flag to 0 to 1 or 1 to 0.
            result.push_back(row);
        }
        return result;
    }
};