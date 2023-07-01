//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int nums[], int size)
    {
        
        // for(int i =0;i<size;i++)
        // {
        //     int cnt = 0;
        //     for(int j = i;j<size;j++){
        //         if(nums[i] == nums[j]){
        //             cnt++;
        //         }
        //         if(cnt > size/2){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;
        
        unordered_map<int,int> mp;
        for(int i =0;i<size;i++){
            mp[nums[i]]++;
        }
        for(auto m:mp){
            if(m.second>size/2){
                return m.first;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends