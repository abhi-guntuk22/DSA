class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();     // size of array
        int s = 0;               // start index
        int e = n - 1;           // end index

        // Binary search loop
        while (s <= e) {

            int mid = s + (e - s) / 2;   // safe mid calculation

            if(n==1) return nums[0];
           if (nums[0] != nums[1])
            return nums[0];
            if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];
            
            // it must be different from both neighbors
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                return nums[mid];
            }

            // Case 1:
            // mid is ODD and equals previous → valid pair → single on RIGHT
            // mid is EVEN and equals next → valid pair → single on RIGHT
            if ( (mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
                 (mid % 2 == 0 && nums[mid] == nums[mid + 1]) )
            {
                s = mid + 1;    // eliminate left half
            }
            else
            {
                e = mid - 1;    // eliminate right half
            }
        }

        return -1;  // should never reach here
    }
};
