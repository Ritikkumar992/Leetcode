//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        string ans = "", temp = "";
        stack<string> st;
        
        for(int i = 0;i<S.size();i++)
        {
            if(S[i] == '.'){
                st.push(temp);
                temp = "";
            }
            else{
                temp += S[i];
            }
        }
        st.push(temp);
        while(st.size() > 1){
            ans += st.top() + '.';
            st.pop();
        }
        ans += st.top();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends