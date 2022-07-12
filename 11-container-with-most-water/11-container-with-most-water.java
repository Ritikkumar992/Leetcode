class Solution {
    public int maxArea(int[] height) {
        //  OPtimiszed Approach: Time:"O(N)" and space:O(1)
        int n = height.length;
        int i = 0, j = n-1;
        int mx_area = 0;
        
        while(i<j)
        {
            int len = Math.min(height[i],height[j]);
            int width = j-i;
            int area = len*width;
            mx_area = Math.max(area,mx_area);
            
            if(height[i] <= height[j])
                i++;
            else
                j--;
        }
        return mx_area;
    }
}