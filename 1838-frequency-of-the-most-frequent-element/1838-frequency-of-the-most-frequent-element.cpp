class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int maxFreq = 1;
        long long int operations = 0;
        int left = 0;

        for (int right = 1; right < nums.size(); right++) {
            operations += (long long int)(nums[right] - nums[right - 1]) * (right - left);

            while (operations > k) {
                operations -= nums[right] - nums[left];
                left++;
            }

            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
};