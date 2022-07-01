class Solution {
    // public static boolean comparator(int []a, int []b){
    //     return a[1]>b[1];
    // }
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes, (a,b)->b[1]-a[1]);
        int ans = 0;
        for(int i= 0;i<boxTypes.length;i++)
        {
            int box_cnt = Math.min(truckSize, boxTypes[i][0]);
            ans += box_cnt*boxTypes[i][1];
            truckSize -= box_cnt;
            
            if(truckSize == 0)
                break;
        }
        return ans;
    }
}