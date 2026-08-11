class Solution {
public:
    bool isValid(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (s.length() == 1) return false;
        stack<char> ms;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                ms.push(c);
            }
            else {
                if (ms.empty()) return false;
                if ((c == ')' && ms.top() == '(') || (c == '}' && ms.top() == '{' )||                    (c == ']' && ms.top() == '[')) {
                    ms.pop();
                }
                else {
                    ms.push(c);
                }
            }
        }
        return ms.empty();
    }
};
