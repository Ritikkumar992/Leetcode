//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    
    // step_01: transpose of the matrix.
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // step_02: reverse each column;.
    int ind = n-1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n/2;j++){
            swap(matrix[j][i], matrix[ind][i]);
            ind--;
        }
        ind = n-1;
    }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends