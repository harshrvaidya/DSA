class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = height.size()-1;
        int l = 0;
        int res=-1;
        int area=0;

        while (l < r) {
            area = min(height[l], height[r]) * (r - l);
            res = max(res, area);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};