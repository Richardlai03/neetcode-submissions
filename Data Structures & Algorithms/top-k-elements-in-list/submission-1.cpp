class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n] += 1;
        }
        vector<vector<int>> buckets (nums.size() + 1);
        for (pair<int, int> p : mp) {
            buckets[p.second].push_back(p.first);
        }
        vector<int> result; 
        for (int i = nums.size(); i >= 0; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
    }
};
