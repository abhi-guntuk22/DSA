class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int l=0, maxi=0;
       unordered_map<int,int>mp;
       for(int r=0;r<fruits.size();r++)
       {
        mp[fruits[r]]++;

        if(mp.size()>2)
        {
            mp[fruits[l]]--;
            if(mp[fruits[l]]==0)
            {
                mp.erase(fruits[l]);
            }
            l++;
        }
        if(mp.size()<=2){
            maxi=max(maxi,r-l+1);
        }
       }
       return maxi;
        
    }
};