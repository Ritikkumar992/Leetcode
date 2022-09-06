class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using moore's voting algorithm:
        int cnt = 0, candidate = 0;
        for(auto num:nums)
        {
            if(cnt == 0)
                candidate = num;
            if(num == candidate)
                cnt++;
            else
                cnt--;
        }
        return candidate;
    }
};