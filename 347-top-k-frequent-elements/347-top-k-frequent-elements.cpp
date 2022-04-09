class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //find the frequency using map:
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        //Traverse the map and find min_heap using priority queue.
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        for(auto i = mp.begin(); i != mp.end();i++){
            min_heap.push({i->second, i->first});
            if(min_heap.size()>k)
                min_heap.pop();
        }
        // making res array to store the ans:
        vector<int> res;
        while(!min_heap.empty()){
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return res;
    }
};