class Solution {
public:
    string intToBinary(int n) {
    string binary = "";
    while (n > 0) {
        if (n & 1) {
            binary = "1" + binary;
        } else {
            binary = "0" + binary;
        }
        n >>= 1;
    }
    return binary.empty() ? "0" : binary;
}
public:
    int countOnes(int n)
    {
        int cnt = 0;
        string temp = intToBinary(n);
        for(auto t:temp){
            if(t == '1'){
                cnt++;
            }
        }
        return cnt;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i<=n;i++){
            ans.push_back(countOnes(i));
        }
        return ans;
    }
};