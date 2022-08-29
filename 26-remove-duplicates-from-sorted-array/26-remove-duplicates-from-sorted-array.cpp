class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Approach_01:using set: Time:O(nlogn + n) and Space:O(n)
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        nums.clear();
        for(auto i = st.begin(); i != st.end();i++){
            nums.push_back(*i);
        }
        return nums.size();
    }
};