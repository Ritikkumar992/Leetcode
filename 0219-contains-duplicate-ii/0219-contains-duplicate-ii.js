/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    let n = nums.length;
    for(let i = 0;i<n;i++){
        for(let j = i+1;j<n;j++){
            if(nums[i] == nums[j] && Math.abs(i-j) <= k)
                return true;
        }
    }
    return false;
};