class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {  // check each character
                    ans.push_back(i);    // store the index
                    break;               // move to next word once found
                }
            }
        }
        return ans;
    }
};
