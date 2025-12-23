class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for (int x : nums) totalSum += x;

        // If total sum is odd → no valid partition
        if (totalSum % 2 != 0) return 0;

        // If total sum is even → all (n-1) partitions are valid
        return nums.size() - 1;
    }
};
