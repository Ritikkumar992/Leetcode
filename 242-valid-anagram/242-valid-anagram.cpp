class Solution {
public:
    bool isAnagram(string s, string t) {
        // Time: O(nlogn) + O(nlogn)
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
};