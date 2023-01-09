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
        //Approach_02: Iterative approach: time:O(n) and Space:O(n)
        List<Integer> ans = new ArrayList<>();
        Stack<TreeNode> st = new Stack<>();
        st.add(root);
        
        while(!st.isEmpty())
        {
            TreeNode currNode = st.peek();
            st.pop();
            
            if(currNode != null)
            {
                ans.add(currNode.val);
                st.add(currNode.right);
                st.add(currNode.left);
            }
        }
        return ans;
    }
}