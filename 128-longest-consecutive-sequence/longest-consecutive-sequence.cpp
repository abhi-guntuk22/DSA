class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int>st(nums.begin(),nums.end());

        for(int num:st)
        {
             if(st.find(num-1)==st.end())
             {
               int cnt=0;
               int i=0;
                while(i<st.size() && st.find(num+i)!=st.end())
                {
                    cnt++;
                    i++;
                }
                 maxi=max(maxi,cnt);
             }
            

        }
        return maxi;
        
    }
};