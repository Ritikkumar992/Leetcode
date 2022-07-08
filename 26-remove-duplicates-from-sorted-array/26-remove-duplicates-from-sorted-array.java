class Solution {
    public int removeDuplicates(int[] nums) {
        // set:
        LinkedHashSet<Integer> st = new LinkedHashSet<>();
        for(int i : nums) 
            st.add(i);
        
        int j = 0;
        for(int i : st) {
            nums[j++] = i;
        }
        return st.size();
    }
}