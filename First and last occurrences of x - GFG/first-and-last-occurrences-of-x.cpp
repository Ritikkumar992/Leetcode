//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int i = 0, j = n-1;
    int first = -1, last = -1;
    while(i<n){
        if(arr[i] == x){
            first =i;
            break;
        }
        i++;
    }
    while(j>=0){
        if(arr[j] == x){
            last = j;
            break;
        }
        j--;
    }
    return {first, last};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends