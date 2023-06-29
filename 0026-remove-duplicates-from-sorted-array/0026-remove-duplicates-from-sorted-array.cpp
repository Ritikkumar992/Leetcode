class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Approach_01: using set:
        set<int> st;
        for(auto num:nums){
            st.insert(num);
        }
        int k = st.size();
        nums.clear();
        for(auto s:st){
            nums.push_back(s);
        }
        return k;
    }
};