class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
       int cnt=0;
       int candidate=0;

       for(int i=0;i<nums.size();i++)
       {
        if(cnt==0)
        {
            candidate=nums[i];   //ager cnt 0 he to curr ele ko candidate assign kr
            cnt=1;
        }
        else{
            if(nums[i]==candidate)  // ager ele aur candidate same he to cnt ko bada
            {
                cnt++;
            }
            else{    // nhi sae to ghata
                cnt--;
            }
        }
       }
       return candidate; //jo last me candidate hoga wahi to apna ans hoga 
    }
};