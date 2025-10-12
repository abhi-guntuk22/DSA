class Solution {
public:
    int minimumLength(string s) {
        int start=0;
        int end=s.length()-1;
       while (start < end && s[start] == s[end]) {
        char ch = s[start];
        // delete all same chars from left side
        while (start <= end && s[start] == ch) {
            start++;
        }
        // delete all same chars from right side
        while (end >= start && s[end] == ch) {
            end--;
        }
    }

    // Remaining string length
    return end - start + 1;
}

    
};