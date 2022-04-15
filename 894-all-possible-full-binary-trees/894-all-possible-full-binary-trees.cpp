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
     unordered_map<int, vector<TreeNode*>> cache;
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<TreeNode*> res;
        if(cache[N].size() != 0) return cache[N];
        if(N == 1) {
            res.push_back(new TreeNode(0));
        } else {
            for (int i = 1; i < N; i += 2) {
                int l = i, r = N - i - 1;
                for (TreeNode* left : allPossibleFBT(l)) {
                    for (TreeNode* right : allPossibleFBT(r)) {
                        TreeNode * root = new TreeNode(0);
                        root->left = left;
                        root->right = right;
                        res.push_back(root);
                    }
                }
            }
        }
        cache[N] = res;
        return res;
    }
};