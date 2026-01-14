class Solution {
public:
bool cansplit(vector<int>&nums,int k,int maxsum)
{
    int currsum=0;
    int parts=1;
    for(int x:nums)
    {
        if(currsum+x>maxsum)
        {
            parts++;
            currsum=x;

            if(parts>k)
            {
                return false;
            }
        }
        else{
            currsum+=x;
        }

    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(),nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(cansplit(nums,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};