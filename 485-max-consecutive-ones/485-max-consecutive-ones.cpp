class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, mx = 0;
        for(int i= 0;i<nums.size();i++){
            if(nums[i] == 1){
                cnt++;
                mx = max(mx,cnt);
            }
            else{
                cnt = 0;
            }
        }
        return mx;
    }
};