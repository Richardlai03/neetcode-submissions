class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        for (string str : strs) {
            vector<int> v (26,0);
            for (char c : str){
                v[c - 'a']++;
            }
            string key = to_string(v[0]);
            for (int i = 1; i < 26; ++i) {
                key += "," + to_string(v[i]);
            }
            mp[key].push_back(str);
        }
        for (pair<string, vector<string>> p : mp) { 
            result.push_back(p.second);
        }
        return result;
    }
};
