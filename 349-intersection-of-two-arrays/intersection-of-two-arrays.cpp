class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>mp;
        
        int n=nums1.size(),m=nums2.size();
        set<int>s;

        for(int x:nums1)
        {
            mp[x]++;
        }
        for(int x:nums2)
        {
            if(mp.find(x)!=mp.end()) {
                s.insert(x);
            }

        }
        vector<int>ans;
        for(int ele:s)
        {
           ans.push_back(ele);
        }
    
      return ans;    
    }
};