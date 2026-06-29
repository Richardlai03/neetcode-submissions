class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        sort(intervals.begin(), intervals.end(), [] (const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
        int l = 0;
        int r = 0;
        while (l < intervals.size()) {
            int end = intervals[l][1];
            while (r + 1 < intervals.size() && end >= intervals[r + 1][0]) {
                ++r;
                end = max(end, intervals[r][1]);
            }
            output.push_back({intervals[l][0], end});
            l = r + 1;
            r = l;
        }
        return output;
    }
};
