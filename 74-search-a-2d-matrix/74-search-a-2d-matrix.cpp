class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Approach_02: Binary Search: Time: O(log(n*m)) and Space:O(1)
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0, high = n*m-1;
        
        if(!matrix.size())
            return false;
        
        while(low <= high)
        {
            int middle = (low+(high-low)/2);
            //checking all the three condition for middle element:
            int mid_ele = matrix[middle/m][middle%m];
            if(mid_ele > target)
                high = middle-1;
            else if(mid_ele < target)
                low = middle+1;
            else
                return true;
        }
        return false;
    }
};