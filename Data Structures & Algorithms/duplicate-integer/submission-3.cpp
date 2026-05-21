using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniq;
        //for (int i = 0; i < nums.size(); ++i){
            uniq.insert(nums.begin(), nums.end());
        //}
        if (uniq.size() == nums.size()){
            return false;
        }
        return true;
    }
};