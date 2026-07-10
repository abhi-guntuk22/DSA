class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     ans.push_back(nums[i]*nums[i]);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
       int s=0,e=nums.size()-1;
       int idx=nums.size()-1;
       vector<int>ans(idx+1);
       while(s<=e)
       {
        if(abs(nums[s])>abs(nums[e]))
        {
            ans[idx--]=nums[s]*nums[s];
            s++;
        }
        else{
            ans[idx--]=nums[e]*nums[e];
            e--;
        }
       }
       return ans;
    }
};