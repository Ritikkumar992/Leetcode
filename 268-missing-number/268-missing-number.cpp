class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Using Binary Searc: time:O(nlogn) and Space:O(1)
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0, end = n, mid = (start+end)/2;
        
        while(start < end)
        {
            mid = (start+end)/2;
            if(nums[mid] > mid)
                end = mid;
            else
                start = mid+1;
        }
        return start;
    }
};