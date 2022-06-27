class Solution {
    public int minPartitions(String n) {
        // just we need to return the max digit from the string;
        int res = 0;
        for(int i = 0;i<n.length();i++){
            res = Math.max(res, n.charAt(i)-'0');
        }
        return res;
    }
}