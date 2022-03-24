class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // Greedy (Two-Pointer). : Time : O(nlogn) and Space: O(N)
        sort(people.begin(),people.end());
        int i = 0, j = people.size()-1;
        int ans = 0;
        
        while(i <= j)
        {
            ans++;
            if(people[i] + people[j] <= limit)
                i++;
            j--;
        }
        return ans;
    }
};