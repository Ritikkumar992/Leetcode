class Solution {
public:
    int minDeletions(string s) {
        // Time:  O(N + K^2 \log K)O(N+K^2logK) and Space:O(k)
        // Step 1: Create a freq array and store the freq of each char
        vector<int> freq(26,0);
        for(int i =0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        // Step 2: Create a mac_heap and store the freq of each char
        priority_queue<int> max_heap;
        for(int i = 0;i<26;i++){
            if(freq[i]>0)
                max_heap.push(freq[i]);
        }
        // Step 3: Traverse through the max_heap and if top 2 elem are same increase the cnt 
        //and push the topElement -1 each time
        int deleteCnt = 0;
        while(max_heap.size()>1)
        {
            int topElement = max_heap.top();
            max_heap.pop();
            
            if(topElement == max_heap.top()){
                if(topElement - 1 > 0){
                    max_heap.push(topElement-1);
                }
                deleteCnt++;
            }
        }
        return deleteCnt;
    }
};