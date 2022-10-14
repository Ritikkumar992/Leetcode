//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    int Solve(int N, vector<int>& piles, int H) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            if(!isPossibleToEat(piles,H,mid)){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends