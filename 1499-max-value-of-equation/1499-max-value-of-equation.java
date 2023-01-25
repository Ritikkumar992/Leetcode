class Solution {
    public int findMaxValueOfEquation(int[][] pts, int k) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b) -> b[0] - a[0]); // max-heap
        pq.offer(new int[]{pts[0][1] - pts[0][0], pts[0][0]});
        int ans = Integer.MIN_VALUE;
        for (int i = 1; i < pts.length; i++) {
            int sum = pts[i][0] + pts[i][1];
            while (!pq.isEmpty() && pts[i][0] - pq.peek()[1] > k) pq.poll();
            if (!pq.isEmpty()) ans = Math.max(ans, sum + pq.peek()[0]);
            pq.offer(new int[]{pts[i][1] - pts[i][0], pts[i][0]});
        }
        return ans;
    }
}
