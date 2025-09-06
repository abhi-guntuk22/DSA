class Solution {
public:
    void solve(string digits, int idx, string op, vector<string>& ans, string mapping[]) {
        if (idx >= digits.length()) {
            ans.push_back(op);
            return;
        }

        int no = digits[idx] - '0';
        string value = mapping[no];

        for (int j = 0; j < value.length(); j++) {
            op.push_back(value[j]);
            solve(digits, idx + 1, op, ans, mapping);  
            op.pop_back(); // backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) return ans; 

        string op = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, 0, op, ans, mapping);
        return ans;
    }
};
