class Solution {
public:
    bool static comparator(vector<int>&a, vector<int>&b){
        return a[1]>b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // step1:sorting on the basis of 2nd element of boxtypes:
        sort(boxTypes.begin(),boxTypes.end(),comparator);
        int ans = 0;
        for(int i = 0;i<boxTypes.size();i++)
        {
            int box_cnt = min(boxTypes[i][0],truckSize);
            ans += box_cnt*boxTypes[i][1];
            truckSize -= box_cnt;
            
            if(truckSize == 0)
                break;
        }
        return ans;
    }
};