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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        //Iterative Approach:
        Deque<TreeNode> dq = new LinkedList<TreeNode>();
        dq.add(p);
        dq.add(q);
        
        while(!dq.isEmpty())
        {
            p = dq.poll();
            q = dq.poll();
            
            if(p == null && q == null) continue;
            if(p == null || q == null) return false;
            if(p.val != q.val) return false;
            
            dq.add(p.left);
            dq.add(q.left);
            dq.add(p.right);
            dq.add(q.right);
        }
        return true;
    }
}