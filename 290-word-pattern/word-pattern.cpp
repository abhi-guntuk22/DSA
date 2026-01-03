class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // STEP 1: Split the sentence 's' into words
        vector<string> words;
        string temp = "";

        // Loop till <= because last word won't end with space
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(temp);  // store one word
                temp = "";              // reset for next word
            } else {
                temp += s[i];           // build the word
            }
        }

        // STEP 2: If number of letters != number of words
        // then pattern can never match
        if (pattern.size() != words.size()) {
            return false;
        }

        // STEP 3: HashMap to store mapping: word -> character
        unordered_map<string, char> mp;

        // STEP 4: Set to keep track of characters already used
        set<char> used;

        // STEP 5: Traverse pattern and words together
        for (int i = 0; i < pattern.size(); i++) {

            string word = words[i];
            char ch = pattern[i];

            // Case 1: word is not mapped yet AND character not used yet
            if (mp.find(word) == mp.end() && used.find(ch) == used.end()) {
                mp[word] = ch;     // map word to character
                used.insert(ch);   // mark character as used
            }

            // Case 2: word already mapped
            else if (mp[word] != ch) {
                return false;      // mapping conflict
            }
        }

        // If all checks passed
        return true;
    }
};
