class Solution {
public:
    int jump(vector<int>& nums) {
        // Time O(n) and Space : O(1)
        int begin=0,end=0,farthest=0;
        int jump=0;
        
        for(int i=0;i<nums.size()-1;i++){
            farthest = max(farthest, i + nums[i]);
            
            if(i == end){
                jump++;
                end=farthest;
            }
        }
        return jump;
    }
};