class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int sl = INT_MAX;
        int sec = INT_MAX;

        for (int x : nums) {

            if (x <= sl) {
                sl = x;
            }
            else if (x <= sec) {
                sec = x;
            }
            else {
                return true;
            }
        }

        return false;
    }
};