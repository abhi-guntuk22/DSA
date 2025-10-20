class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int res=0;
         for(int i=0;i<n;i++)
         {
            if(operations[i]=="--X" || operations[i]=="X--")
            {
                res=res-1;
            }
            else{
                res=res+1;
            }
         }
         return res;
    }
};