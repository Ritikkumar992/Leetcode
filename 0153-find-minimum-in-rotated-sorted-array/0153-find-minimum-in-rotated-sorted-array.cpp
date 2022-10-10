class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        
        if(nums.size() == 1)
            return nums[0];
        
        //if the last ele is greater than the first ele then there is no rotation;
        //hence smallest elem is the first element:
        if(nums[high] > nums[0])
            return nums[0];
        //binary search logic:
        while(high >= low)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[mid+1])
                return nums[mid+1];
            if(nums[mid-1] > nums[mid])
                return nums[mid];
            
            //if the mid ele value is greater than the 0th ele this means the least value is still
            // somewhere to the right as we still dealing with the elm greater than 
            if(nums[mid] > nums[0]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return INT_MAX;
    }
};