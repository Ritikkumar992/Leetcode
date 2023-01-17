class Solution {
    public int minFlipsMonoIncr(String s) {
        int oneCount = 0, zeroToOneCount = 0, i = 0;
        while(i<s.length() && s.charAt(i) == '0'){
            i++;
        }
        for(;i<s.length();i++){
            char c = s.charAt(i);
            if(c == '0'){
                zeroToOneCount++; // flip -> 0 to 1.
            }
            else{
                oneCount++; // flip 1 to 0.
            }
            if(zeroToOneCount > oneCount){
                zeroToOneCount = oneCount;
            }
        }
        return zeroToOneCount;
    }
}