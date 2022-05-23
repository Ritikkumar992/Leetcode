class Solution {
public:
    int strStr(string haystack, string needle) {
        //Brute force: Time:O(n^2) and Space:O(1)
        for(int i =0;;i++)
        {
            for(int j = 0;; j++)
            {
                if(j == needle.size())
                    return i;
                if(i+j == haystack.size())
                    return -1;
                if(needle[j] != haystack[i+j])
                    break;
            }
        }
    }
};