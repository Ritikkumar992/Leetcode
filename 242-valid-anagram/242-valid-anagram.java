class Solution {
    public boolean isAnagram(String s, String t) {
        //Approach_01: Brute force: Time: O(nlogn) + O(nlogn)
        char tempS[] = s.toCharArray();
        Arrays.sort(tempS);
        
        char tempT[] = t.toCharArray();
        Arrays.sort(tempT);
        
        int n = tempS.length;
        int m = tempT.length;
        if(n != m)
            return false;
        for(int i = 0;i<n;i++){
            if(tempS[i] != tempT[i])
                return false;
        }
        return true;
    }
}