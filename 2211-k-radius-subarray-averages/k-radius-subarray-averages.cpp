class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>avgarr(n);
        int l=0;
        long long  sum=0;
         int idx=k;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            if(r<k || r>=n-k)
            {
                avgarr[r]=-1;
            }
           
            if(r-l==(2*k))
            {
                avgarr[idx] = sum/((2*k)+1);
                idx++;
                sum-=nums[l];
                l++;
            }
        }
        return avgarr;
        
    }
};