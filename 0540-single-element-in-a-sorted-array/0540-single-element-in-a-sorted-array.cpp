class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the start of a pair
            if (nums[mid] == nums[mid ^ 1])
                low = mid + 1;
            else
                high = mid;
        }

        return nums[low];
    }
};
