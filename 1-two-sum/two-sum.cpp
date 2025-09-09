class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for (int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int mpreneeded=target-num;
            if(mpp.find(mpreneeded)!=mpp.end())
            {
                return {mpp[mpreneeded],i};

            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};