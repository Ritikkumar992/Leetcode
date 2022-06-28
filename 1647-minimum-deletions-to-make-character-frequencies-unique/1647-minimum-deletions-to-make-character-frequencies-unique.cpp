class Solution {
public:
    int minDeletions(string s) {
        //Approach_02: using priority_queue:
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        priority_queue<int> max_heap;
        for (int i = 0; i<26; i++){
            if (freq[i] > 0) {
                max_heap.push(freq[i]);
            }
        }
        int cnt = 0;
        while(max_heap.size()>1)
        {
            int top1 = max_heap.top();
            max_heap.pop();
            if(top1 == max_heap.top()){
                if(top1-1 > 0){
                    max_heap.push(top1-1);
                }
                cnt++;
            }
        }
        return cnt;
    }
};