class Solution {
public:
    unordered_map<char, char> mp;
bool isAlienSorted(vector<string>& words, string order) {        
	// Infact, we can do without the + 'a' below as well. It just won't map to English but rather to characters having ascii 0,1,2...
	for(int i = 0; i < size(order); i++) mp[order[i]] = i + 'a';  
	for(auto& word : words)
		for(auto& c : word) c = mp[c];
	return is_sorted(begin(words), end(words));
} 
};