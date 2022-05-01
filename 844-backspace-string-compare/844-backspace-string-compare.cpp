class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // Using Stack:
        stack<int> s1, s2;
        string str1, str2;
        for(auto i:s){
            if(i == '#' && !s1.empty()){
                s1.pop();
            }
             else if(i != '#'){
                s1.push(i);
             }
        }
        for(auto i:t){
            if(i == '#' && !s2.empty()){
                s2.pop();
            }
            else if(i != '#'){
                s2.push(i);
             }
        }
        while(!s1.empty())
        {
            str1.push_back(s1.top());
            s1.pop();
        }
        while(!s2.empty())
        {
            str2.push_back(s2.top());
            s2.pop();
        }
        return str1 == str2;
    }
};