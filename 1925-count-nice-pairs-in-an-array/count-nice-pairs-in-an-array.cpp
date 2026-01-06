class Solution {
public:
    int rev(int n){
            int rvrs=0;
            while(n>0)
            {
            int lastdigit=n%10;
            rvrs=(rvrs*10)+lastdigit;
            n=n/10;
         
        }
        return rvrs;
    }
    int countNicePairs(vector<int>& nums) {
       int res=0;
       int M=1e9+7;
       for(int i=0;i<nums.size();i++)
       {
        nums[i]=nums[i]-rev(nums[i]);
       }

       unordered_map<int,int>mp;
       for(int &num:nums)
       {
         res=(res+mp[num]) %M;
         mp[num]++;
       }
         return res;
      
    }
};