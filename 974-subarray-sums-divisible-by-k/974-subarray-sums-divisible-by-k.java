class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        // Time:O(n) and Space:O(n)
        int sum = 0,ans = 0, rem = 0;
        Map<Integer,Integer> mp = new HashMap<>();
        mp.put(0,1);
        for(int i= 0;i<nums.length;i++)
        {
            sum += nums[i];
            rem = sum%k;
            if(rem < 0)
                rem += k;
            if(mp.containsKey(rem)){
                ans += mp.get(rem);
            }
            mp.put(rem, mp.getOrDefault(rem,0)+1);
        }
        return ans;
    }
}