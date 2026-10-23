class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int n=nums.size();
        int maxcnt=0;
    
    //     int zerocnt=0;
    //    for(int r=0;r<n;r++)
    //    { 
    //     if(nums[r]==0)
    //     {
    //      zerocnt++;
    //     }
    //     while(zerocnt>k)
    //     {
    //         if(nums[l]==0)
    //         {
    //             zerocnt--;
    //         }
    //         l++;
    //     }
    //     maxcnt=max(maxcnt,r-l+1);
    //    }
    //    return maxcnt;

    for(int r=0;r<n;r++)
    {
        if(nums[r]==0)
        {
            k--;
        }
        if(k<0)
        {
            if(nums[l]==0)
            {
                k++;
            }
            l++;
        }
        maxcnt=max(maxcnt,r-l+1);
    }
    return maxcnt;
    }
};