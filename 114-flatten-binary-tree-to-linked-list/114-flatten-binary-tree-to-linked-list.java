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
    public void flatten(TreeNode root) {
        //Approach_02: Using Stack: TIme:O(n) and Space:O(n)
        if (root == null) 
            return;
        Stack<TreeNode> st = new Stack<>();
        st.push(root);
        while (!st.isEmpty()) {
            TreeNode  cur = st.peek();
            st.pop();
            if(cur.right != null) {
                st.push(cur.right);
            }
            if(cur.left != null) {
                st.push(cur.left);
            }
            if (!st.isEmpty()) {
                cur.right = st.peek();
            }
            cur.left = null;
        }
    }
}