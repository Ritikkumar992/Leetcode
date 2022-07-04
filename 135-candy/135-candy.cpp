class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int candies = 0;
        
        vector<int> left(n,1);
        vector<int> right(n,1);
        
        // left relative vector.
        for(int i =1;i<n;i++)
        {
            //give curr index rating > previos , have to give more ratings.
            if(ratings[i] > ratings[i-1]) left[i] = left[i-1]+1;
        }
        // right relative vector.
        for(int i = n-2;i>=0;i--)
        {
            //give curr index rating > previos , have to give more ratings.
            if(ratings[i] > ratings[i+1]) right[i] = right[i+1]+1;
        }
        // merge both sides/
        for(int i = 0;i<n;i++){
            candies += max(left[i],right[i]);
        }
        return candies;
    }
};