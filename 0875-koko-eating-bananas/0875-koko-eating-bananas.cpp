class Solution {
public:
    bool isPossibleToEat(vector<int>&piles, int hour, int curK)
    {
        int cnt = 0;
        for(auto pile:piles){
            cnt += pile/curK;
            if(pile%curK != 0){
                cnt++;
            }
        }
        return cnt<=hour;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            if(!isPossibleToEat(piles,h,mid)){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};