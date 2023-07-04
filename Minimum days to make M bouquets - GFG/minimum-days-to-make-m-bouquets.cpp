//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
  
    int solve(int M, int K, vector<int> &bloomDay){
      if(M * 1ll * K * 1ll > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = high;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(possible(bloomDay, mid, M, K)){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends