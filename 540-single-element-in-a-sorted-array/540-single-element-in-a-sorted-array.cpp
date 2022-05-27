class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //Approach_04: Binary Search : Time:O(logn) and Space:O(1)
        int n = nums.size();
        int low = 0;
        int high = n - 2;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (mid % 2 == 0) {
                if (nums[mid] != nums[mid + 1]) 
                    //Checking whether we are in right half
                    high = mid - 1; //Shrinking the right half
                    else
                        low = mid + 1; //Shrinking the left half
                } else {
                    //Checking whether we are in right half
                    if (nums[mid] == nums[mid + 1]) 
                        high = mid - 1; //Shrinking the right half
                    else
                        low = mid + 1; //Shrinking the left half
                }
            }
            return nums[low];
    }
};