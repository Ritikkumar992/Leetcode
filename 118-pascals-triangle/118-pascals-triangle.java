class Solution {
    public List<List<Integer>> generate(int numRows) {
        // creating the res list 
        List<List<Integer>> result = new ArrayList<>();
        for(int i = 0 ; i < numRows; i++) {
            //step1: initializing the 1st and last index of each row with 1.
            List<Integer> list = new ArrayList<>();
            for(int j = 0; j < i + 1 ; j++) {
                if(j == 0 || j == i) {
                    list.add(1);
                }
                // step2; fill the empty space with pasca's law:
                else {
                    int a = result.get(i - 1).get(j - 1);
                    int b = result.get(i - 1).get(j);
                    list.add(a + b);
                }
            }
            result.add(list);
         }
        return result;
      }
}