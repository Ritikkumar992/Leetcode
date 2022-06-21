class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count = 0;
        int n = intervals.size();
        int i = 0;   //left interval
        int j = 1;  //right interval
        
        while(j<n)  //Unless all intervals are compared
        {
            if(intervals[i][1] <= intervals[j][0])   //Non-overlapping case
            {
                i = j;
                j+=1;
            }
            else if(intervals[i][1]<=intervals[j][1])    //Overlapping case-1 (Remove right interval)
            {
                count+=1;
                j+=1;
            }
            else if(intervals[i][1]>intervals[j][1])     //Overlapping case-2 (Remove left interval)
            {
                count+=1;
                i = j;
                j+=1;
            }
        }
        
        return count;
    }
};