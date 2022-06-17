class Solution {
public:
    string reorganizeString(string s) {
        //Using Max_heap; Time:O(nlok)
        unordered_map<char,int> mp;
        for(auto it:s)
            mp[it]++;
        priority_queue<pair<int,char>> max_heap;
        for(auto p:mp){
            max_heap.push({p.second, p.first});
        }
        string res;
        pair<int,char> top1,top2;
        while(!max_heap.empty())
        {
            top1= max_heap.top(); max_heap.pop();
            res += top1.second;
            if(!max_heap.empty()){
                res += max_heap.top().second;
                top2 = max_heap.top(); max_heap.pop();
                
                if(top2.first>1)
                    max_heap.push({top2.first-1, top2.second});
            }
            if(top1.first>1)
                    max_heap.push({top1.first-1, top1.second});
        }
        for(int i = 1;i<res.size();i++){
            if(res[i] == res[i-1])
                return "";
        }
        return res;
    }
};