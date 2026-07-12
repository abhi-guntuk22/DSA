class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        // 1. Initialize everything to -1. Now you don't need boundary 'if' statements.
        vector<int> avgarr(n, -1); 
        
        int l = 0;
        long long sum = 0; // Prevent integer overflow
        int window_size = 2 * k + 1;

        for (int r = 0; r < n; r++) {
            sum += nums[r]; // Expand window

            // 2. Once the window reaches the required size (2*k + 1)
            if (r - l + 1 == window_size) {
                // The center index of this window is always exactly (r - k)
                avgarr[r - k] = sum / window_size; 
                
                sum -= nums[l]; // Shrink window from left
                l++;
            }
        }
        return avgarr;
    }
};
