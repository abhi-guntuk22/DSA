class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0,j=nums.size()-1;
        int s=0,e=nums.size()-1;
        vector<int>ans(nums.size(), 0);
        
        while(i<nums.size())
        {
            if(nums[i]<pivot) {
              ans[s]=nums[i];
              s++;
            }

            if(nums[j]>pivot) {
                ans[e]=nums[j];
                e--;
            }
            i++;
            j--;
        }

        while(s<=e)
        {
            ans[s]=pivot;
            s++;
        }
        return ans;
    }
};