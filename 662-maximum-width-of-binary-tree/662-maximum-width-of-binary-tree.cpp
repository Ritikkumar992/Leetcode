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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)  return 0;
        int ans = 0;
        // queue of tree node and index
        queue<pair<TreeNode*, int>> q;
      
        // level order traversal --> push the root and 0 index into the queue
        q.push({root,0});
      
        // while queue is not empty
        while(!q.empty()){
            // get the size of the queue to run a for loop/ iterate
            int size = q.size();
            // to make the id starting from zero, getting the index of the root 
            int min_index = q.front().second;    
            unsigned long long int first,last;
          
            // now iterate through every level
            for(int i=0; i<size; i++){
                // get the current_index as current_index - min_index 
                unsigned long long int cur_id = q.front().second - min_index;
                TreeNode* node = q.front().first;
                q.pop();
                // when i reach 0 and size-1 update first index = 0 and last index as size-1
                if(i==0) first = cur_id;
                if(i==size-1) last = cur_id;
                // go to left subtree push node and cur_id*2+1 into the q
                if(node->left)
                    q.push({node->left, cur_id*2+1});
                // go to left subtree push node and cur_id*2+2 into the q
                if(node->right)
                    q.push({node->right, cur_id*2+2});
            }
            // update the answer = max of last - first + 1
            ans = max(ans, int(last-first+1));
        }
        return ans;
    }
};