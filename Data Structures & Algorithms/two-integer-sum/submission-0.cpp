class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2,0);
        unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.contains(target - nums[i])) {
                result[0] = mp[target - nums[i]];
                result[1] = i;
            }
            mp[nums[i]] = i;
        }
        return result;
    }
};
