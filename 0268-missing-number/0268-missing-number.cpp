class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashMap(n+1, 0);
        
        for(int i = 0;i<n;i++){
            hashMap[nums[i]]++;
        }
        for(int i = 1;i<hashMap.size();i++){
            if(hashMap[i] == 0){
                return i;
            }
        }
        return 0;
    }
};
