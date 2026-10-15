class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int>ans;
       int cnt=0;
   
       int n=s.length();
       int m=p.length();
       vector<int>res;
       if(m>n) return res;
       vector<int>frq1(26),frq2(26);
     

       for(int i=0;i<m;i++)
       {
        frq1[p[i]-'a']++;
        frq2[s[i]-'a']++;
       }
       
       if(frq1==frq2)
       {
        res.push_back(0);
       }
       for(int i=m;i<n;i++)
       {
        frq2[s[i-m]-'a']--;
        frq2[s[i]-'a']++;
        
        if(frq1==frq2)
        {
           res.push_back(i-m+1); 
        }
       }
       return res;
    }
};