class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> min_heap = new PriorityQueue<Integer>();
        for(int i:nums)
        {
            min_heap.add(i);
            if(min_heap.size()>k)
                min_heap.remove();
        }
        return min_heap.peek();
    }
}