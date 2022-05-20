class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,L,R;
        i=0;
        int size=nums.size();
        vector <vector<int>> result;
        while(i<size-3)
        {   j=i+1;
            while(j<size-2)
            {
                L=j+1;
                R=size-1;
                while(L<R)
                {
                    if(nums[i]+nums[j]==target-nums[L]-nums[R])
                    {
                       vector <int> temp={nums[i],nums[j],nums[L],nums[R]};
                       result.emplace_back(temp);
                       int numL= nums[L];
                       int numR= nums[R];
                       while(nums[L]==numL && L<size-1)  
                                L++;
                       while(nums[R]==numR && R>2)
                                R--;                           
                    }
                    else if(nums[L]+nums[R]<target-(nums[i]+nums[j]))
                    {
                       int numL= nums[L];
                       while(nums[L]==numL && L<size-1)  
                                L++;                           
                    }
                    else
                    {
                       int numR= nums[R];
                       while(nums[R]==numR && R>2)
                                R--;             
                    }
                }
            
                int numj= nums[j];
                while(nums[j]==numj && j<size-2)  
                        j++;
                    
            }
                                                      
            int numi= nums[i];
            while(nums[i]==numi && i<size-3)  
                    i++;
                                                       
        }

      return result;  
    }
};