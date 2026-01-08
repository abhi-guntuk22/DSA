class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        int s=0;
        int e=n-1;
      
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[s]<=nums[mid])
            {
               mini=min(nums[s],mini);
               s=mid+1;
            }
            else{
                mini=min(nums[mid],mini);
                e=mid-1;
            }
        }    
        return mini;
    }
};