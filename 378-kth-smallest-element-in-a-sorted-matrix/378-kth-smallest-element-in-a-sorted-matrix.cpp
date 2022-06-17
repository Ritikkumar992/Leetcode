class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> max_heap;
        for(auto it:matrix)
        {
            for(auto i:it){
                max_heap.push(i);
                if(max_heap.size()>k)
                    max_heap.pop();
            }
        }
        return max_heap.top();
    }
};