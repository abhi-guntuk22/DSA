class Solution {
public:
    int trap(vector<int>& height) {
       int totwater = 0, lmax = 0, rmax = 0;
        int n=height.size();
        int l=0,r=n-1;
        
      while(l<r){
        if(height[l]<=height[r])
        {
         if(height[l]<lmax) totwater+=(lmax-height[l]);
         else lmax=height[l];
         l++;
        }
        else
        {
          if(height[r]<rmax) totwater+=(rmax-height[r]);
          else rmax=height[r];
          r--;
        }
        
      }
     return totwater;

    }
};