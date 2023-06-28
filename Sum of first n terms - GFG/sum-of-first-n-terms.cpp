//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long cube(long long x){
        return x*x*x;
    }
    long long sumOfSeries(long long N) {
        // code here
        long long sum = 0;
        if(N<1){
            return 0;
        }
        sum += cube(N);
        
        return sum + sumOfSeries(N-1);;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends