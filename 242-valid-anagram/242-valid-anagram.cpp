class Solution {
public:
    bool isAnagram(string s, string t) {
        //Approach_02: Using HashMap: TIme:O(n) and Space:O(n)
        if (s.size()!=t.size()) return false;
        
		unordered_map <char, int> umap;
        for (char c:s) umap[c]++;
        
        for(char c:t) {
            umap[c]--;
            if (umap[c]<0) return false;
        }
        
        return true;
                    
    }
};