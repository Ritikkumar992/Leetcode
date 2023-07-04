class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0, k = 0;
        vector<int> ans(n+m);
        
        while(i<n && j<m)
        {
            if(nums1[i] < nums2[j]){
                ans[k++] = nums1[i++];
            }
            else{
                ans[k++] = nums2[j++];
            }
        }
        if(i<n){
            while(i<n){
                ans[k++] = nums1[i++];
            }
        }
        if(j<m){
            while(j<m){
                ans[k++] = nums2[j++];
            }
        }
        n = n+m;
        if(n%2 == 1){
            return ans[((n+1)/2)-1];
        }
        else
            return ((float)ans[(n/2)-1]+(float)ans[(n/2)])/2;
    }
};