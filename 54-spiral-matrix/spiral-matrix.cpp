class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        int dir = 0;

        while (left <= right && top <= bottom) {
            if (dir == 0) { // Left to Right
                for (int col = left; col <= right; col++) {
                    ans.push_back(matrix[top][col]);
                }
                top++;
            } 
            else if (dir == 1) { // Top to Bottom
                for (int row = top; row <= bottom; row++) {
                    ans.push_back(matrix[row][right]);
                }
                right--;
            } 
            else if (dir == 2) { // Right to Left
                for (int col = right; col >= left; col--) {
                    ans.push_back(matrix[bottom][col]);
                }
                bottom--;
            } 
            else if (dir == 3) { // Bottom to Top
                for (int row = bottom; row >= top; row--) {
                    ans.push_back(matrix[row][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }

        return ans;
    }
};
