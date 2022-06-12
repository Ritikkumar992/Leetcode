class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        //Approach_01:Using HashSet and Sliding Window : Time:O(n) and Space:O(n)
        int n = nums.size(), l = 0, r = 0, curr_sum = 0, ans = 0;
        unordered_set<int> st;
        while(r<n)
        {
            while(st.find(nums[r]) != st.end())
            {
                curr_sum -= nums[l];
                st.erase(nums[l++]);
            }
            curr_sum += nums[r];
            st.insert(nums[r++]);
            
            ans = max(ans, curr_sum);
        }
        return ans;
    }
};