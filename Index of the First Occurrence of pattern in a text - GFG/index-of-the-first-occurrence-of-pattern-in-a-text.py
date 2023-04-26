#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def findMatching(self, text, pattern):
        # Code here
        return text.find(pattern)

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        text, pattern = input().split()
        ob = Solution()
        res = ob.findMatching(text, pattern)
        print(res)
# } Driver Code Ends