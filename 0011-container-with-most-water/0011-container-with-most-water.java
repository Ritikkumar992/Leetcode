class Solution {
    public int maxArea(int[] height) {
        //approach_02: two pointer 
        int i = 0, j = height.length-1;
        int amount = 0;
        while(i<=j)
        {
            int length = Math.min(height[i],height[j]);
            int width = j-i;
            int area = length*width;
            amount = Math.max(area, amount);
            
            if(height[i] <= height[j])
                i++;
            else
                j--;
        }
        return amount;
    }
}