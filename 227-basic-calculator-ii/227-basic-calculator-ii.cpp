
class Solution {
public:
    int calculate(string s) {
        //Using Stack: Space optimization Time:O(N) and Space:O(1)
        int len = s.length();
        if (len == 0) return 0;
        // stack<int> stack;
        int currentNumber = 0, lastNumber = 0, res = 0;
        char operation = '+';
        for (int i = 0; i < len; i++) {
            char currentChar = s[i];
            if (isdigit(currentChar)) {
                currentNumber = (currentNumber * 10) + (currentChar - '0');
            }
            if (!isdigit(currentChar) && !iswspace(currentChar) || i == len - 1) {
                if (operation == '+' || operation == '-' ) {
                    res += lastNumber;
                    lastNumber = (operation == '+') ? currentNumber: -currentNumber;
                }else if (operation == '*') {
                    lastNumber = lastNumber*currentNumber;
                } else if (operation == '/') {
                    lastNumber = lastNumber/currentNumber;
                }
                operation = currentChar;
                currentNumber = 0;
            }
        }
        res += lastNumber;
        return res;
    }
};
