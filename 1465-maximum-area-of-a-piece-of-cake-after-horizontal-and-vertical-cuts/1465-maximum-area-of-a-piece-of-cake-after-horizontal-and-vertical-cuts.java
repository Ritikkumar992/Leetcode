class Solution {
    public int maxArea(int h, int w, int[] horizontalCuts, int[] verticalCuts){
        Arrays.sort(horizontalCuts);
        Arrays.sort(verticalCuts);
        
        int maxHeight = Math.max(horizontalCuts[0]-0, h-horizontalCuts[horizontalCuts.length-1]);
        for(int i= 1;i<horizontalCuts.length;i++){
            int horizontalWeight = horizontalCuts[i] - horizontalCuts[i-1];
            maxHeight = Math.max(maxHeight, horizontalWeight);
        }
        
        int maxWeight = Math.max(verticalCuts[0]-0, w-verticalCuts[verticalCuts.length-1]);
        for(int i= 1;i<verticalCuts.length;i++){
            int verticalWeight = verticalCuts[i] - verticalCuts[i-1];
            maxWeight = Math.max(maxWeight, verticalWeight);
        }
        long ans = 1L*maxHeight*maxWeight;
        return (int)(ans%1000000007);
    }
}