class Solution {
public:
void solve(vector<int>nums,int idx,vector<vector<int>>&ans)
{
    if(idx>=nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    for(int i=idx;i<nums.size();i++)
    {
        swap(nums[idx],nums[i]);
        solve(nums,idx+1,ans);

        //backtracking
        swap(nums[idx],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int idx=0;
        vector<vector<int>>ans;
        solve(nums,idx,ans);
        return ans;
    }
};