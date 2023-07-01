class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Better Appraoch: Time:O(n) and Space:O(1)
        int n  = nums.size();
        int ans = 0;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1;i<n;i++){
            prefix[i] = nums[i]+prefix[i-1];
        }
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            if(prefix[i] == k)
                ans++;
            if(mp.find(prefix[i]-k) != mp.end()){
                ans += mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }
        return ans;
    }
};