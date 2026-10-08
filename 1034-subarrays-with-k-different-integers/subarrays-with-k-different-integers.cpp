class Solution {
public:
int atmost(vector<int>& nums,int k)
{
    int l=0;
    int cnt=0;
    unordered_map<int,int>mp;
    for(int r=0;r<nums.size();r++)
    {
        mp[nums[r]]++;

        while(mp.size()>k)
        {
            mp[nums[l]]--;
            if(mp[nums[l]]==0)
            {
                mp.erase(nums[l]);
            }
            l++;
        }
        if(mp.size()<=k)
        {
            cnt+=r-l+1;
        }
        
    }
    return cnt;

} 

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};