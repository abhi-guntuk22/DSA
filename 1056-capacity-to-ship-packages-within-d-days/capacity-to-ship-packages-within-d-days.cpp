class Solution {
public:

    // Function to calculate how many days are needed
    // if ship capacity = capacity
    int finddays(vector<int>& weights, int capacity)
    {
        int days = 1;     // at least 1 day
        int load = 0;     // current day's load

        for (int i = 0; i < weights.size(); i++)
        {
            // If current package cannot fit in today's ship
            if (load + weights[i] > capacity)
            {
                days++;                 // move to next day
                load = weights[i];      // start new day with this package
            }
            else
            {
                load += weights[i];     // add to current day
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        // Minimum capacity = max single package
        int s = *max_element(weights.begin(), weights.end());

        // Maximum capacity = sum of all packages
        int e = accumulate(weights.begin(), weights.end(), 0);

        int ans = 0;

        // Binary search on ship capacity
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            int daysreq = finddays(weights, mid);

            // If possible within given days
            if (daysreq <= days)
            {
                ans = mid;      // mid is a valid capacity
                e = mid - 1;    // try smaller capacity
            }
            else
            {
                s = mid + 1;    // capacity too small, increase it
            }
        }
        return ans;
    }
};
