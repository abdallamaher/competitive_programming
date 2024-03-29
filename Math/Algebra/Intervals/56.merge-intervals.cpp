/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

 // @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector< vector<int> > ans;
        for (int i = 0; i < n; i++) {
            if (ans.empty()) {
                ans.push_back(intervals[i]);
            }
            else if (ans.back()[1] >= intervals[i][0]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

