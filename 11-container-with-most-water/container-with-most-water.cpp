class Solution {
public:
     int maxArea(vector<int>& height) {
    int s = 0;
    int e = height.size() - 1;
    int maxArea = 0;

    // Two pointer approach
    while (s < e) {
        // height of container is limited by the smaller line
        int h = min(height[s], height[e]);
        // width between the two lines
        int w = e - s;

        // calculate area and store maximum
        int area = h * w;
        maxArea = max(maxArea, area);

        // move the pointer with smaller height
        if (height[s] < height[e])
            s++;
        else
            e--;
    }
    return maxArea;
}

     
};