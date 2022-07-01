/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    TreeNode ans,target;
    public void dfs(TreeNode og, TreeNode copy){
        if(og == null)
            return;
        if(og == target)
            ans = copy;
        dfs(og.left,copy.left);
        dfs(og.right,copy.right);
    }
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        this.target = target;
        dfs(original,cloned);
        return ans;
    }
}