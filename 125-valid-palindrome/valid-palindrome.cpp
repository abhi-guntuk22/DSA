// class Solution {


// bool valid(char ch)
// {
//     if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
//     char tolower( char ch)
// {
//     if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')) 
//     {
//         return ch;
//         }
//     else {
//         char temp = ch-'A'+'a';
//         return temp;
//     }
// }

//   bool checkpallidrom( string a)
//  {
//     int s=0,e= a.length()-1;
//     while(s<=e)
//     {
//         if((a[s])!=(a[e]))
//         {
//             return 0;

//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
//  }
// public:
//     bool isPalindrome(string s) {
//         string  temp ="";
//         for(int j=0;j<s.length();j++)
//         {
//             if(valid(s[j]))
//             {
//                 temp.push_back(s[j]);
//             }
//         }

//         //to lower 
//         for(int j=0;j<temp.length();j++)
//         {
//             temp[j] = tolower(temp[j]);

//         }

//         return checkpallidrom(temp);
        
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;

        while(l<r)
        {
            while(l<r && !isalnum(s[l])){
                l++;
            }
            while(l<r && !isalnum(s[r]))
            {
                r--;
            }
            if(tolower(s[l])!=tolower(s[r]))
            {
                return false;
            }
            else{
                l++,r--;
            }

        }
        return true;
    }
};