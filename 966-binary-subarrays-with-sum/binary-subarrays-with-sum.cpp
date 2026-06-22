class Solution {
public:
    // count subarrays with sum <= goal
    int atmostsum(vector<int>& nums, int goal)
    {
        if(goal < 0) return 0;   // important edge case

        int sum = 0;
        int cnt = 0;
        int l = 0;               // initialize left pointer

        for(int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            // shrink window if sum exceeds goal
            while(sum > goal) {
                sum -= nums[l];
                l++;
            }

            // all subarrays ending at r are valid
            cnt += (r - l + 1);
        }

        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostsum(nums, goal) - atmostsum(nums, goal - 1);
    }
};
