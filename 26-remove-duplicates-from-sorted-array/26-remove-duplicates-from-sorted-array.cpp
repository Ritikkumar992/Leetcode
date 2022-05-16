class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using set:
        set<int> st;
        for(auto i:nums){
            st.insert(i);
        }
        nums.clear();
        for(auto i = st.begin(); i!= st.end();i++)
        {
            nums.push_back(*i);
        }
        return nums.size();
    }
};