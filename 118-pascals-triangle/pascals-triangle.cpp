class Solution {
public:
    vector<vector<int>> generate(int numRows) {
           vector<vector<int>> arr(numRows);   // make 2D vector

    for (int line = 0; line < numRows; line++) {   // loop through rows
        arr[line].resize(line + 1);    // resize each row
        for (int i = 0; i <= line; i++) {   // each row has (line+1) elements
            if (i == 0 || i == line) {
                arr[line][i] = 1;   // first and last element always 1
            } else {
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i]; // middle elements
            }
            cout << arr[line][i] << " ";
        }
        cout << endl;
    }
    return arr;
}
};