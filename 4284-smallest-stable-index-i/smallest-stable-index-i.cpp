class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>sufmin(n),prefmax(n);
        sufmin[n-1]=nums[n-1];
        prefmax[0]=nums[0];
        for(int i=1;i<n;i++)
        {
         if(nums[i]>=prefmax[i-1])
         {
            prefmax[i]=nums[i];
         }
         else{
            prefmax[i]=prefmax[i-1];
         }
        }
        for(int i=n-2;i>=0;i--)
        {
         if(nums[i]<sufmin[i+1])
         {
            sufmin[i]=nums[i];
         }
         else{
            sufmin[i]=sufmin[i+1];
         }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(prefmax[i]-sufmin[i]<=k) return i;
        }
        
        return -1;
    }
};