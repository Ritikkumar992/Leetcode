class Solution {
public:
    bool checkIfPangram(string sentence) {
        array<bool,26>seen{};
        for(auto s:sentence){
            seen[s-'a'] = true;
        }
        for(auto status:seen){
            if(!status){
                return false;
            }
        }
        return true;
    }
};