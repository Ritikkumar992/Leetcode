//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int atoi(string str) {
        
        int res = 0;
        int sign = 1;
        
        int i = 0;
        if(str[i] == '-'){
            sign = -1;
            i++;
        }
        for(;i<str.size();i++)
        {
            
            if(!(str[i]-'0' >= 0 && str[i]-'0' <= 9)){
                return -1;
            }
            else{
                res = res*10 + str[i]-'0';
            }
        }
        res = res*sign;
        return res;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends