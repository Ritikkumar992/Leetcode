class Solution {
public:
    int findfirst(vector<int>nums,int target)
    {
        int s=0,e=nums.size()-1,mid;
        int res=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2; // to remove integer overflow
            if(target==nums[mid])
            {
                res=mid;
                e=mid-1; // instead of breaking search more occurence in first half
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
                s=mid+1;
            
        }
        return res;
    }
    int findlast(vector<int>nums,int target)
    {
        int s=0,e=nums.size()-1,mid;
        int res=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2; // to remove integer overflow
            if(target==nums[mid])
            {
                res=mid;
                s=mid+1; // instead of breaking search more occurence in second half
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
                s=mid+1;
            
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=-1,r=-1;
       l=findfirst(nums,target);
        if(l!=-1)
            r=findlast(nums,target);
        return {l,r};
    }
};