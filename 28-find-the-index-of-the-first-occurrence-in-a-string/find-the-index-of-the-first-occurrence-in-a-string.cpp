class Solution {
public:
    int strStr(string haystack, string needle) {
      int n=haystack.size();
      int m=needle.size();
      
    //   for(int i=0;i<n;i++)
    //   {
    //     if(haystack.substr(i,m)==needle)      //brute force
    //     {
    //         return i;
    //     }
    //   }
 
   vector<int>lps(m,0);  //lps 
   int pre=0,suf=1;
   while(suf<m)
   {
    if(needle[pre]==needle[suf])
    {
        lps[suf]=pre+1;
        suf++,pre++;
    }
    else{
        if(pre==0)
        {
            lps[suf]=0;
            suf++;
        }
        else{
            pre=lps[pre-1];
        }
    }
   }

   int first=0,sec=0;      //by using lps 
   while(first<n && sec<m)
   {
    if(haystack[first]==needle[sec])
    {
        first++,sec++;
    }
    else{
        if(sec==0){
        first++;
        }
        else{
            sec=lps[sec-1];
        }
    } 
    if(sec==m)
    {
        return first-sec;
    }

   }

      return -1; 
    }
};