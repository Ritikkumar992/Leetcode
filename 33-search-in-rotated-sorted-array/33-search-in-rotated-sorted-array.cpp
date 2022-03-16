class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Time : O(log n) and space:O(1)
        int l =0, r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(target == nums[mid])
                return mid;
            
            // if there exists rotations; the middle element is the left part of the array.
            if(nums[mid] > nums[r])
            {
                if(target < nums[mid] && target >= nums[l])
                    r = mid-1;
                else
                    l = mid+1;
            }
            
            // if there exists rotation; the middle element is the right part of the array.
            else if(nums[mid] < nums[l])
            {
                if(target > nums[mid] && target <= nums[r])
                    l = mid+1;
                else
                    r = mid-1;
            }
            else{
                if(target < nums[mid])
                    r = mid -1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
};