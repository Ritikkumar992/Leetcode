class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        //Approach_01: Using Max_heap:
        int n = heights.size();
        priority_queue<int,vector<int>, greater<int>> min_heap;
        for(int i =0;i<n-1;i++)
        {
            int diff = heights[i+1]-heights[i];
            if(diff > 0)
                min_heap.push(diff);
            if(min_heap.size()>ladders){
                bricks -= min_heap.top();
                min_heap.pop();
            }
            if(bricks < 0)
                return i;
        }
        return n-1;
    }
};