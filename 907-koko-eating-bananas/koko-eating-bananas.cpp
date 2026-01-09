class Solution {
public:

    
    // mid = eating speed (bananas per hour)
    long long totalHr(vector<int>& piles, int mid)
    {
        long long hrs = 0;

        // Calculate hours for each pile
        for (int i = 0; i < piles.size(); i++)
        {
            // hrs += ceil(piles[i] / mid)
            hrs += piles[i] / mid;

            // if not divisible, add one extra hour
            if (piles[i] % mid != 0)
                hrs++;
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] > maxi)
                maxi = piles[i];
        }

        int s = 1;        // minimum speed
        int e = maxi;     // maximum speed
        int ans = 0;      // stores minimum valid speed

       
        while (s <= e)
        {
            int mid = s + (e - s) / 2;   // current speed

            long long hrs = totalHr(piles, mid);

            // If Koko can eat all bananas within h hours
            if (hrs <= h)
            {
                ans = mid;      // possible answer
                e = mid - 1;    // try smaller speed
            }
            else
            {
                s = mid + 1;    // need higher speed
            }
        }
        return ans;
    }
};
