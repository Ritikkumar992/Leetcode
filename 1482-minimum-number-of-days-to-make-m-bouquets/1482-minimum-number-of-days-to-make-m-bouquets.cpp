class Solution {
public:
    bool possible(vector<int>&arr, int day, int m , int k)
    {
        int cnt = 0, noOfB =  0;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] <= day)
                cnt++;
            else{
                noOfB += cnt/k;
                cnt = 0;
            }
        }
        noOfB += cnt/k;
        if(noOfB >= m)
            return true;
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m * 1ll * k * 1ll > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = high;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(possible(bloomDay, mid, m, k)){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};