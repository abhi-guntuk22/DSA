class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        k = k % n;  // handle if k > n

    // Step 1: reverse first n-k elements
    reverse(nums.begin(), nums.begin() + (n - k));

    // Step 2: reverse last k elements
    reverse(nums.begin() + (n - k), nums.end());

    // Step 3: reverse whole array
    reverse(nums.begin(), nums.end());
    }
};
