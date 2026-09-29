class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=0;
        int high;
        int t;
        for( high=0;high<nums.size();high++)
        {
            if(nums[high]!=0)
            {
                t=nums[low];
                nums[low]=nums[high];
                nums[high]=t;

                low++;
              
            }
            
        }
    }
};