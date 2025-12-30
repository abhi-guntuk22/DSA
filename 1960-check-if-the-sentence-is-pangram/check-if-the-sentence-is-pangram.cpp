class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        int cnt=0;
        for(int i=0;i<sentence.size();i++)
        {
            int idx=sentence[i]-'a';
            v[idx]++;
        }
        for(int i=0;i<v.size();i++)
        {
          if(v[i]==0)
          {
            return false;
          }  
        }
        return true;
    }
};