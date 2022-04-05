class Solution {
public:
    int maxArea(vector<int>& height) {
        // TIme: O(N)
        int i =0 , j = height.size()-1;
        int water = 0;
        
        while(i<j)
        {
            int ht = min(height[i],height[j]);
            int wt = j-i;
            
            water = max(water, ht*wt);
            
            if(height[i] <= height[j])
                i++;
            else
                j--;
        }
        return water;
    }
};