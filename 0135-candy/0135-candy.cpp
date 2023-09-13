class Solution {
public:
    int candy(vector<int>& ratings) {
        // Time:O(3n) and Space:O(2n)
        int n = ratings.size();
        int candies = 0;
        vector<int>left(n,1);
        vector<int>right(n,1);
        
        // left neighbour check:
        for(int i= 1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                left[i] = left[i-1]+1;
        }
        // right neighbour check:
        for(int i= n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                right[i] = right[i+1]+1;
        }
        // merging left and right part:
        for(int i=0;i<n;i++){
            candies += max(left[i],right[i]);
        }
        return candies;
    }
};