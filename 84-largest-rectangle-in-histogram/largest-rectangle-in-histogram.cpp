class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

         int n = heights.size();
        stack<int> st;
        int maxarea=0;

        // vector<int> nse(n), pse(n);

        // // 🔹 NSE (Next Smaller Element)
        // for (int i = n - 1; i >= 0; i--) {

        //     while (!st.empty() && heights[st.top()] >= heights[i]) {
        //         st.pop();
        //     }

        //     nse[i] = st.empty() ? n : st.top();
        //     st.push(i);
        // }

        // // clear stack
        // while (!st.empty()) st.pop();

        // // 🔹 PSE (Previous Smaller Element)
        // for (int i = 0; i < n; i++) {

        //     while (!st.empty() && heights[st.top()] > heights[i]) {
        //         st.pop();
        //     }

        //     pse[i] = st.empty() ? -1 : st.top();
        //     st.push(i);
        // }

        // // 🔹 Calculate max area
        // int maxArea = 0;

        // for (int i = 0; i < n; i++) {
        //     int width = nse[i] - pse[i] - 1;
        //     int area = heights[i] * width;
        //     maxArea = max(maxArea, area);
        // }
        for (int i = 0; i < n; i++) {

            // process elements while current is smaller
            while (!st.empty() && heights[st.top()] > heights[i]) {

                int ele = st.top();
                st.pop();

                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                int width = nse - pse - 1;
                maxarea = max(maxarea, heights[ele] * width);
            }

            st.push(i);
        }

        // process remaining stack
        while (!st.empty()) {

            int ele = st.top();
            st.pop();

            int nse = n;
            int pse = st.empty() ? -1 : st.top();

            int width = nse - pse - 1;
            maxarea = max(maxarea, heights[ele] * width);
        }

        return maxarea;
    }
};