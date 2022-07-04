class Solution {
    public int candy(int[] ratings) {
        // Time:O(3n) and Space:O(2n)
        int n = ratings.length;
        int candies = 0;
        
        int []left = new int[n];
        int []right = new int[n];
        Arrays.fill(left,1);
        Arrays.fill(right,1);
        // for(int i=0;i<n;i++){
        //     left[i] = 1;
        //     right[i] = 1;
        // }
        // left neighbour check:
        for(int i = 1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                left[i] = left[i-1]+1;
        }
        // right neighbour check:
        for(int i = n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                right[i] = right[i+1]+1;
        }
        // merging left and right part:
        for(int i=0;i<n;i++){
            candies += Math.max(left[i],right[i]);
        }
        return candies;
    }
}