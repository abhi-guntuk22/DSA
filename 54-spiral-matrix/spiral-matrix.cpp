class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        int count=0;
        int total=row*col;
while (count < total) {

            // 1. Traverse starting row
            for (int idx = startingCol; idx <= endingCol && count < total; idx++) {
                ans.push_back(matrix[startingRow][idx]);
                count++;
            }
            startingRow++;

            // 2. Traverse ending column
            for (int idx = startingRow; idx <= endingRow && count < total; idx++) {
                ans.push_back(matrix[idx][endingCol]);
                count++;
            }
            endingCol--;

            // 3. Traverse ending row (right to left)
            for (int idx = endingCol; idx >= startingCol && count < total; idx--) {
                ans.push_back(matrix[endingRow][idx]);
                count++;
            }
            endingRow--;

            // 4. Traverse starting column (bottom to top)
            for (int idx = endingRow; idx >= startingRow && count < total; idx--) {
                ans.push_back(matrix[idx][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};
