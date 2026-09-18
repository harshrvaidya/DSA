class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int high = 0;
        int low = 0;
        int sum = 0;
        int ans = INT_MAX;  // Better to use INT_MAX
        
        while(high < n) {
            sum += nums[high];
            high++;
            
            while(sum >= target) {
                // Update answer BEFORE shrinking
                ans = min(ans, high - low);  // high - low is current window size
                sum -= nums[low];
                low++;
            }
        }
        
        return (ans == INT_MAX) ? 0 : ans;
    }
};