class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;

        int mini=INT_MAX;

        while(s<=e)
        {
            int mid=s+(e-s)/2;

            if(nums[s]<=nums[mid])
            {
                mini=min(nums[s],mini);
                s=mid+1;
            }
            else {
                mini=min(nums[mid],mini);
                e=mid-1;
            }
        }
     return mini;
    
    }
};