class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //Approach_01: using Max_Heap: Time:O(nlogk)
        vector<int> res;
        priority_queue<pair<int,int>> max_heap;
        for(auto it:arr){
            max_heap.push({abs(it-x), it});
            if(max_heap.size()>k)
                max_heap.pop();
        }
        while(max_heap.size()>0){
            res.push_back(max_heap.top().second);
            max_heap.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};