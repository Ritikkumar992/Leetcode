class Solution {
    public int minDeletions(String s) {
        // Time:O(n+k^2logk) and Space:O(k)
        int freq[] = new int[26];
        for(int i = 0;i<s.length();i++){
            freq[s.charAt(i)-'a']++;
        }
        PriorityQueue<Integer> max_heap = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                max_heap.add(freq[i]);
            }
        }
        int cnt = 0;
        while(max_heap.size()>1)
        {
            int topElement = max_heap.remove();
            if(topElement == max_heap.peek()){
                if(topElement - 1 > 0){
                    max_heap.add(topElement-1);
                }
                cnt++;
            }
        }
        return cnt;
    }
}