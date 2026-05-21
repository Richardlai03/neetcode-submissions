class Solution {
public:
    bool isAnagram(string s, string t) {
        // if (s.length() != t.length()) return false;
        // vector<int> count_s(26, 0);
        // vector<int> count_t(26, 0);
        // for (char x: s) {
        //     ++count_s[x - 'a'];
        // }
        // for (char x: t) {
        //     ++count_t[x - 'a'];
        // }
        // for (int i = 0; i < count_s.size(); ++i) {
        //     if (count_s[i] != count_t[i]) return false;
        // }
        // return true;
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (char x: s) {
            countS[x]++;
        }
        for (char x: t) {
            countT[x]++;
        }
        if (countS != countT) return false;
        return true;
    }
};
