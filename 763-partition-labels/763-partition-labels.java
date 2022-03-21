class Solution {
    public List<Integer> partitionLabels(String s) {
    HashMap<Character, Integer> map = new HashMap<>();
        //step1: Filling of impact of characters 
        for(int i = 0;i<s.length();i++){
            char ch = s.charAt(i);
            map.put(ch,i);
        }
        // step2: making of result.
        List<Integer> res = new ArrayList<>();
        int prev = -1;
        int max = 0;
        
        for(int i =0;i<s.length();i++){
            char ch = s.charAt(i);
            max = Math.max(max, map.get(ch));
            if(max == i){
                res.add(max-prev);
                prev = max;
            }
        }
        return res;
    }
}