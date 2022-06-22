class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Optimized Approach: Using min_heap: Time:O(nlogk) and Space:O(n)
        priority_queue<int,vector<int>,greater<int>> min_heap;
        
        for(auto it:nums)
        {
            min_heap.push(it);
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        return min_heap.top();
    }
};