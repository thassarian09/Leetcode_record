class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int result = 0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                counter++;
                result = max(counter,result);
            }
            else
            {
                counter = 0;
            }
        }
        return result;
    }
};