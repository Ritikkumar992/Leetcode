class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // linear Search: Time :O(N)
        int mx = *max_element(arr.begin(),arr.end());
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == mx)
                return i;
        }
        return -1;
    }
};