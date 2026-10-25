class Solution {
public:
bool checkcharcnt(string &s, string &t)
{
    vector<int>cnt1(26);
    vector<int>cnt2(26);
    for(int i=0;i<s.size();i++)
    {
      cnt1[s[i]-'a']++;
      cnt2[t[i]-'a']++;
    }
    return cnt1==cnt2;
}
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        return checkcharcnt(s,t);
    }
};