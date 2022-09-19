class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroPointer = 0;
        for (int i=0; i<nums.size();i++)//Remove all the zeros first
        {
            if(nums[i]!=0)
            {
                nums[nonZeroPointer++] = nums[i];
            }
        }
        for (;nonZeroPointer<nums.size();nonZeroPointer++)//Add all the zeros
        {
            nums[nonZeroPointer] = 0;
        }
    }
};