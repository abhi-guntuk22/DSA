class Solution {
public:
     string triangleType(vector<int>& nums) {
        // Check if sides form a valid triangle
        if (!(nums[0] + nums[1] > nums[2] && 
              nums[0] + nums[2] > nums[1] && 
              nums[1] + nums[2] > nums[0])) {
            return "none";
        }

        // Check for Equilateral
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }

        // Check for Isosceles
        else if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) {
            return "isosceles";
        }

        // Otherwise, Scalene
        else {
            return "scalene";
        }
    }
};