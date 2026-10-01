class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,-1);

        // for(int i=2*n-2;i>=0;i--)
        // {
        //     if(nums[i+1]>nums[i])
        //     {
        //         nge[i]=nums[(i+1)%n];
        //     }
        // }  
        // return nge;

        stack<int>st;

        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
          
            if(st.empty()) nge[i%n]=-1;
            else nge[i%n]=st.top();
           
            st.push(nums[i%n]);
        }
       return nge;

    }
};