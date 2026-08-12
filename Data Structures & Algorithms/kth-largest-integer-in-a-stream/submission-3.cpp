class KthLargest {
private:
    int k;
    vector<int> nums;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;
    }
    
    int add(int val) {
        this->nums.push_back(val);
        sort(this->nums.begin(), this->nums.end());
        int index = this->nums.size() - this->k;
        return this->nums[index];
    }
};
