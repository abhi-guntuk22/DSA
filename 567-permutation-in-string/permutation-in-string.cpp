class Solution {

//     bool checkequal(int a[26],int b[26])
//     {
//         for(int i=0;i<26;i++)
//         {
//             if(a[i]!=b[i])
//             {
//                 return 0;
//             }
          
//         }
//           return 1;
//     }
//  public:
//     bool checkInclusion(string s1, string s2) {
//         //charactor count array 
//         int count1[26]={0};
//         for(int i=0;i<s1.length();i++){
//             int idx=s1[i]-'a';
//             count1[idx]++;

//         }
//         // traverse s2 string in window of size s1 length and compare

//         int i=0;
//         int windowsize=s1.length();
//         int count2[26]={0};
//         while(i<windowsize && i<s2.length())
//         {
//             int idx=s2[i]-'a';
//             count2[idx]++;
//             i++;
//         }
//         if(checkequal(count1,count2))
//         return  1;

//         while(i<s2.length())
//         {
//             char newchar=s2[i] ;
//             int idx=newchar-'a';
//             count2[idx]++;

//             char oldchar=s2[i-windowsize];
//             idx=oldchar-'a';
//             count2[idx]--;
//             i++;
//              if(checkequal(count1,count2))
//         return  1;
//         }
//         return 0;


 public:
    bool checkInclusion(string s1, string s2) {

    int n=s1.size();
    int m=s2.size();
   if(n>m) return false;
    vector<int>freq1(26,0),freq2(26,0);

    for(int i=0;i<n;i++) 
    {
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
                                    //check for first window 
    } 
    if(freq1==freq2) return true;
     
    for(int i=n;i<m;i++){
        freq2[s2[i]-'a']++;
        freq2[s2[i-n]-'a']--;

        if( freq1==freq2) return true;
    }
    return false;
                              
    }
};