class Solution {
    public long maxKelements(int[] nums, int k) {
        //using priority queue:
        // priority queue in reverse order is going to give us the highest value 
        PriorityQueue<Integer>pq = new PriorityQueue<>(Collections.reverseOrder());
        int n = nums.length;
        long answer = 0;
        
        //step1: add all the elem in the priority queue:
        for(int num:nums){
            pq.add(num);
        }
        //loop k no of times as mentioned in the qus:
        while(k != 0)
        {
            //now grab the highest value from the queue using poll function, it will always gives highest value:
            int temp = pq.poll();
            answer += temp;
            
            // After adding highest element in our answer
            // Give that number back to queue by doing the-
            //-operation as told in question ceil(num[i]/3)
            
            double s = (double)temp/3;
            pq.add((int)Math.ceil(s));
            k--;
        }
        return answer;
    }
}