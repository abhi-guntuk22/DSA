class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
    int n =s.size();
    int first=0,sec=0;
    vector<bool>cnt(256,0);
    int len=0;
    while(sec<n)
    {
        //repeating remove kro

        while(cnt[s[sec]])
        {
            cnt[s[first]]=0;
            first++;
        } 
        cnt[s[sec]]=1;
        len=max(len ,sec-first+1);
        sec++;
        

    }
    return len;
    }
    //     int lengthOfLongestSubstring(string s) {
//     int n = s.size();
//     int maxLen = 0;

//     // start index
//     for (int i = 0; i < n; i++) {

//         vector<bool> used(256, false);

//         // end index
//         for (int j = i; j < n; j++) {
//             if (used[s[j]]) {
//                 break;  // duplicate found
//             }
//             used[s[j]] = true;
//             maxLen = max(maxLen, j - i + 1);
//         }
//     }
//     return maxLen;
// }

};