class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder res = new StringBuilder();
        int n = word1.length();
        int m = word2.length();
        
        for(int i = 0;i<Math.max(n,m);i++){
            if(i<n){
                res.append(word1.charAt(i));
            }
            if(i<m){
                res.append(word2.charAt(i));
            }
        }
        return res.toString();
    }
}