class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Approach - 4: Binary Search: Time: O(nlogn) and space: (1)
        int low = 1, high = nums.size()-1;
        int duplicate = -1;
        
        while(low <= high)
        {
            int cur =(low+high)/2;
            //count how many numbers in nums are less than or equal to 'cur'
            int cnt = 0;
            for(int &num:nums){
                if(num <= cur)
                    cnt++;
            }
            if(cnt > cur){
                duplicate = cur;
                high = cur -1;
            }
            else{
                low = cur+1;
            }
        }
        return duplicate;
    }
};