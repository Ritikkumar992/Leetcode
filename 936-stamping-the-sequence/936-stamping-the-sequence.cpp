class Solution {

public:
    vector<int> movesToStamp(string s, string t) {
        int n = t.size(), m = s.size();
        
        auto check = [&](int i) {
            for (int j = 0; j < m; j++) {
                if (t[i + j] != '?' && t[i + j] != s[j]) return false;
            }
            for (int j = 0; j < m; j++) {
                if (t[i + j] != '?') return true;
            }
            return false;
        };
        
        vector<int> moves;
        string done(n, '?');
        
        while (t != done) {
            bool move = false;
            for (int i = 0; i < n - m + 1; i++) {
                if (check(i)) {
                    fill(t.begin() + i, t.begin() + i + m, '?');
                    moves.push_back(i);
                    move = true;
                }
            }
            if (!move) return {};
        }
        
        reverse(moves.begin(), moves.end());
        return moves;
    }
};