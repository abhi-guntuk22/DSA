class Solution {
public:
    bool isPalindrome(int x) {
        if( x<0) return false;
        string s= to_string(x);
        int st=0;
        int e=s.length()-1;
        while(st<=e)
        {
         if(s[st++]!=s[e--])
         {
            return false;
         }

        }
        return true;
    }
};