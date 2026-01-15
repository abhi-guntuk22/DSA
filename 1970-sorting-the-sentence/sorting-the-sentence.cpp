class Solution {
public:
    string sortSentence(string s) {

        vector<string> ans(10);   // positions 1–9
        string temp = "";
        int cnt = 0;

        for (int i = 0; i <= s.size(); i++) {

            if (i == s.size() || s[i] == ' ') {

                int pos = temp.back() - '0'; // last char is position
                temp.pop_back();             // remove digit

                ans[pos] = temp;
                cnt++;

                temp.clear();
            }
            else {
                temp += s[i];
            }
        }

        // build final answer
        string result = "";
        for (int i = 1; i <= cnt; i++) {
            result += ans[i];
            result += ' ';
        }

        result.pop_back(); // remove last space
        return result;
    }
};
