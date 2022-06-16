class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
     int l=0; //start window(left window)
        int r=0;//end widow(right window)
        int res=0;
        int maxCount=0;
        unordered_map<char,int>count;
        while(r<n){
            count[s[r]]++;    //it count all the char 
            maxCount=max(maxCount,count[s[r]]);
            
            if(r-l+1-maxCount>k){  //if (window length - max frequency char >k) means window is not valid so shrink it
                count[s[l]]--;//shrink the window length
            l++;     
            }   
             res=max(res,r-l+1); 
               r++;   
        }
        return res;
    }
};