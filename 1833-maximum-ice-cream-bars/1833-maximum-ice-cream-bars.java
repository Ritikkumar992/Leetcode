class Solution {
    public int maxIceCream(int[] costs, int coins) {
        //Approach_01: sorting
        int cnt = 0;
        Arrays.sort(costs);
        
        for(int i = 0;i<costs.length;i++){
            if(coins >= costs[i]){
                cnt++;
                coins -= costs[i];
            }
        }
        return cnt;
    }
}