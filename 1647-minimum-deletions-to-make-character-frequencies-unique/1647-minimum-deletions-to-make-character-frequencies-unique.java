class Solution {
    public int minDeletions(String s) {
        int[]freq = new int[26];
        for(int i = 0;i<s.length();i++){
            freq[s.charAt(i) - 'a']++;
        }
        int deleteCnt = 0;
        HashSet<Integer> st = new HashSet<>();
        for(int i = 0;i<26;i++){
            while(freq[i] > 0 && st.contains(freq[i])){
                freq[i]--;
                deleteCnt++;
            }
            st.add(freq[i]);
        }
        return deleteCnt;
    }
}