class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        //Approach_01: Using Max_heap:
        int n = heights.size();
        priority_queue<int> max_heap;
        for(int i =0;i<n-1;i++)
        {
            int diff = heights[i+1]-heights[i];
            if(diff > 0)
                max_heap.push(-diff);
            if(max_heap.size()>ladders){
                bricks += max_heap.top();
                max_heap.pop();
            }
            if(bricks < 0)
                return i;
        }
        return n-1;
    }
};