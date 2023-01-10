/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        //Recursive Approach:
        List<Integer> ans = new ArrayList<>();
        preorder(root, ans);
        return ans;
    }
    void preorder(TreeNode node, List<Integer>ans)
    {
        if(node == null)
            return;
        ans.add(node.val);
        preorder(node.left,ans);
        preorder(node.right, ans);
    }
}