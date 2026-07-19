class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        int n=s.size(),m=t.size();
        bool ans=true;
        if(n!=m) return false;
        int i=0;
        for(i=0;i<n;i++)
        {

            if(mp.find(s[i])!=mp.end()){
              if(mp[s[i]]!=t[i]) return false;
            }
            mp[s[i]]=t[i];
        }
        mp.clear();
        for(i=0;i<m;i++)
        {

            if(mp.find(t[i])!=mp.end()){
              if(mp[t[i]]!=s[i]) return false;
            }
            mp[t[i]]=s[i];
        }
        return ans;
    }
};