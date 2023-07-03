class Solution {
public:
    int binarySearch(vector<int>&arr, int low, int high, int x)
    {
        if(low > high)
            return -1;
        int mid = low + (high-low)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
            return binarySearch(arr, low, mid-1, x);
        else
            return binarySearch(arr, mid+1, high, x);
    }
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};