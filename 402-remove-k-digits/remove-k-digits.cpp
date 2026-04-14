class Solution {
public:
    string removeKdigits(string num, int k) {

        stack<char> st;

        // 🔹 Step 1: Traverse digits
        for (char digit : num) {

            // Remove larger digits from stack
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }

            st.push(digit);
        }

        // 🔹 Step 2: If k still remains, remove from end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // 🔹 Step 3: Build result string from stack
        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        // Reverse since stack gives reverse order
        reverse(res.begin(), res.end());

        // 🔹 Step 4: Remove leading zeros
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }

        res = res.substr(i);

        // 🔹 Step 5: Handle empty case
        if (res == "") return "0";

        return res;
    }
};