class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> max_heap;
        int n = stones.size();
        
        for(int i = 0;i<n;i++){
            max_heap.push(stones[i]);
        }
        int first,second;
        
        while(n>1)
        {
            first = max_heap.top();
            max_heap.pop();
            second = max_heap.top();
            max_heap.pop();
            n -= 2;
            
            if(first-second > 0){
                max_heap.push(first-second);
                n += 1;
            }
        }
        if(!max_heap.empty())
            return max_heap.top();
        return 0;
    }
};