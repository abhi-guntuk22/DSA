class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>ans(nums.size());
       int n=nums.size();
        int sufprod=1; 
        for(int i=n-1;i>=0;i--)
        {
         ans[i]=sufprod;
         sufprod=sufprod*nums[i];
        }

        int prefprod=1;
        for(int i=0;i<n;i++)
        {
        ans[i]= ans[i]*prefprod;
        prefprod=prefprod*nums[i];
        }
        return ans;
    }
};