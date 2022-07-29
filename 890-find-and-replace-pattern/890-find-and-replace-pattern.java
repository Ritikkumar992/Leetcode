class Solution {
    public static boolean isMatching(String word, String pattern)
    {
        HashMap<Character,Character> mp = new HashMap<>();
        HashSet<Character>st = new HashSet<>();
        
        for(int i = 0;i<pattern.length();i++)
        {
            char wch = word.charAt(i);
            char pch = pattern.charAt(i);
            
            if(mp.containsKey(pch) == true){
                // pattern character is already mapped:
                if(mp.get(pch) != wch)
                    return false;
            }
            else{
                // pattern character is new for mapping:
                if(st.contains(wch))
                    return false;
                mp.put(pch,wch);
                st.add(wch);
            }
        }
        return true;
    }
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        List<String> res = new ArrayList<>();
        for(String word: words){
            if(isMatching(word,pattern))
                res.add(word);
        }
        return res;
    }
}