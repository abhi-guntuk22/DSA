class Solution {
public:
    // Function to repeatedly reduce the string
    string final(string s) {
        // Base case: when only 2 digits remain
        if (s.size() <= 2) return s;

        string res = "";
        for (int i = 0; i < s.size() - 1; i++) {
            int sum = (s[i] - '0') + (s[i + 1] - '0'); // convert char → int
            res += to_string(sum % 10); // append digit as string
        }

        return final(res); // recursive call
    }

    bool hasSameDigits(string s) {
        string reduced = final(s); // store the final reduced string
        if (reduced.size() == 2 && reduced[0] == reduced[1]) {
            return true;
        }
        return false;
    }
};
