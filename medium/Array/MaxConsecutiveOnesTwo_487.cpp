class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_one = 0, max_zero = 0, max_all = 0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                ++max_one;
                ++max_zero;
            }
            else
            {
                max_zero = max_one+1;
                max_one = 0;
            }
            max_all = max(max_zero,max_all);//record the max number of consecutive ones
        }
        return max_all;
    }
};