class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIdx = 0;
    int colIdx = col - 1;  // Start from top-right

    while (rowIdx < row && colIdx >= 0) {
        int ele = matrix[rowIdx][colIdx];

        if (ele == target) {
            return true;   // Found
        } 
        else if (ele < target) {
            rowIdx++;      // Move downward
        } 
        else {
            colIdx--;      // Move left
        }
    }
    return false;  // Not found
}
};