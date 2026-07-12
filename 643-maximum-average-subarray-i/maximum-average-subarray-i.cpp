class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double maxsum = -1e9; // FIX: Works even if all numbers are negative
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            if (r - l + 1 == k) {
                maxsum = max(maxsum, sum);

                sum -= nums[l]; // shrink the window from the left
                l++;
            }
        }
        return maxsum / k;
    }
};
