class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_map;  //key: players ,value :count of losses
        for(int i=0;i<matches.size();i++)
        {
            int loser=matches[i][1];

            lost_map[loser]++;
        }
        vector<int>zero_lost;
        vector<int>one_lost;
        for(int i=0;i<matches.size();i++)
        {
            int winner=matches[i][0];
            int loser=matches[i][1];
            if(lost_map.find(winner)==lost_map.end())
            {
                zero_lost.push_back(winner);
                lost_map[winner]=2;

            }
            if(lost_map[loser]==1)
            {
                one_lost.push_back(loser);
            }
        }
        sort(one_lost.begin(),one_lost.end());
         sort(zero_lost.begin(),zero_lost.end());
         return {zero_lost,one_lost};
    }
};