class Solution {
public:
    bool isvowel(char ch) {
        return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }

    string sortVowels(string s) {

        vector<char> vowels;   

        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                vowels.push_back(s[i]);
            }
        }

        sort(vowels.begin(),vowels.end());
       
        int idx=0;  //index pointing to vowel arr
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=vowels[idx++];
            }
        }
        return s;
    }
};
