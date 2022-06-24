class Solution {
    public int removeDuplicates(int[] arr) {
      int j=0;
      TreeSet<Integer>ts=new TreeSet<>();
	  
      for(int val:arr)
        ts.add(val);
      
         
      for(int val :arr)
         if(ts.contains(val))
         {
            arr[j++]=val;
            ts.remove(val);
         }
        
      return j;
    }
}