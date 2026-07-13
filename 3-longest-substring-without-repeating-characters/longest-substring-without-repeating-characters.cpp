class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int l=0;
    int maxlen=0;
// unordered_map<char,int>mp;

//     for(int r=0;r<s.size();r++)
//     {
//         if(mp.find(s[r])!=mp.end())
//         {
          
//           l=max(l,mp[s[r]]+1);
//         }
//         mp[s[r]]=r;
//         maxlen=max(maxlen,r-l+1);

//     }
  vector<int>mp(128,-1);
  for(int r=0;r<s.size();r++)
  {
    if(mp[s[r]]>=l)
    {
        l=mp[s[r]]+1;
        
    }
    mp[s[r]]=r;
    maxlen=max(maxlen,r-l+1);
  }
    return maxlen;
    
   }

};