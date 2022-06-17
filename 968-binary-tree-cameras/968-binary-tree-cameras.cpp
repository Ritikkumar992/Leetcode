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
    int camera = 0;  
    int check(TreeNode *root){
    if(root==NULL) return 0;   
    if(!root->left && !root->right ) return -1;  
    
    int l = check(root->left);  
    int r = check(root->right);
    
    if(l==-1 || r==-1 ){  
        camera++;
        return 1;
    }
    else if(l == 1 || r==1) return 0;  
    return -1;   
}
public:
    int minCameraCover(TreeNode* root) {
     if(!root->left && !root->right) return 1;
       int y=  check(root);  
      if(y==-1) {
          camera++;
      }
      return camera;
  }
};