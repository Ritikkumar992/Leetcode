class Solution {
    public int findDuplicate(int[] nums) {
        // Approach_02: Using Set : TIme:O(n) and Space:O(n)
        Set<Integer> st = new HashSet<>();
        for(int num:nums){
            if(st.contains(num))
                return num;
            st.add(num);
        }
        return -1;
    }
}