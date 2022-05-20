class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm:
        int cnt = 0; // for tacking the cnt of element:
        int element = 0; // for which element we are counting:
        
        for(auto it:nums)
        {
            if(cnt == 0)
                element = it;
            if(element == it)
                cnt +=1 ;
            else cnt -= 1;
        }
        return element;
    }
};