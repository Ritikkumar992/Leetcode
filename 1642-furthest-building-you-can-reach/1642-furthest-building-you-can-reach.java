class Solution {
    public int furthestBuilding(int[] heights, int bricks, int ladders) {
        int n = heights.length;
        PriorityQueue<Integer> max_heap = new PriorityQueue<>();
        for(int i =0;i<n-1;i++)
        {
            int diff = heights[i+1]-heights[i];
            if(diff > 0)
                max_heap.add(diff);
            if(max_heap.size()>ladders){
                bricks -= max_heap.poll();
                // max_heap.pop();
            }
            if(bricks < 0)
                return i;
        }
        return n-1;
    }
}