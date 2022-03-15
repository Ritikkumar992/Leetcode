class Solution {
public:
    int countNegativeHelper(vector<int>&vec)
    {
        int low = 0;
        int high = vec.size() - 1;
        while(low <= high)
        {
            int mid = low + (high-low) / 2;
            if(vec[mid] >=0){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return vec.size() - high -1;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        // using binary search:
        int cnt = 0;
        for(int i = 0;i<grid.size();i++){
            cnt += countNegativeHelper(grid[i]);
        }
        return cnt;
    }
};