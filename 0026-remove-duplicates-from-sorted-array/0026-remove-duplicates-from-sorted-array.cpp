class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Approach_01: using set: 
        set<int>res;
        for(auto it:nums){
            res.insert(it);
        }
        nums.clear();
        for(auto i = res.begin(); i != res.end();i++){
            nums.push_back(*i);
        }
        return nums.size();
    }
};