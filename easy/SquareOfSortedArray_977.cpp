class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result(nums.size());
        int i = 0, j = nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--)
        {
            if (abs(nums[i])>=abs(nums[j]))
            {
                result[k] = pow(nums[i],2);
                
                i++;
            }
            else
            {
                result[k]=pow(nums[j],2);
                
                j--;
            }
            
        }
        return result;
    }
};