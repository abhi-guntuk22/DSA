class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;  // index for valid elements

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];  // keep element
                i++;
            }
        }
        return i;  // new length
    }
};
