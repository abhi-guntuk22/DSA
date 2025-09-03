class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<int>& res, vector<vector<int>>& ans) {
        // base case
        if (idx >= nums.size()) {
            ans.push_back(res);
            return;
        }

        // exclude
        solve(nums, idx + 1, res, ans);

        // include
        res.push_back(nums[idx]);
        solve(nums, idx + 1, res, ans);
        res.pop_back();  // backtrack
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        solve(nums, 0, res, ans);
        return ans;
    }
};
