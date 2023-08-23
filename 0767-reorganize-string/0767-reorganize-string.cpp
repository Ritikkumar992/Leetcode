class Solution {
public:
    string reorganizeString(string s) {
        vector<int> hash(26,0);
        for(char c:s){
            hash[c-'a']++;
        }
        int mx = 0, letter = 0;
        for(int i = 0;i<26;i++)
        {
            if(hash[i] > mx){
                mx = hash[i];
                letter = i;
            }
        }
        if(mx > (s.size()+1)/2){
            return "";
        }
        string ans = s;
        int ind = 0;
        // fill all even places with majority element:
        while(hash[letter] != 0)
        {
            ans[ind] = char(letter+'a');
            ind += 2;
            hash[letter]--;
        }
        // fill the remaining letter at any place:
        for(int i = 0;i<26;i++)
        {
            while(hash[i] > 0){
                if(ind >= s.size())
                    ind = 1;
                ans[ind] = char(i + 'a');
                ind += 2;
                hash[i]--;
            }
        }
        return ans;
    }
};