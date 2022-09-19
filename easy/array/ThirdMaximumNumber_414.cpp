class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int max1 = LONG_MIN;
        long int max2 = LONG_MIN;
        long int max3 = LONG_MIN;
        
        // loop the array
        for(int num  : nums){
            if(num > max1){
                max3 = max2;
                max2 = max1;
                max1 = num;
            }else if(num == max1){ 
                continue; // skip the equal values.
            }else if(num > max2){
                max3 = max2;
                max2 = num;
            }else if(num == max2){
                continue;
            }
            else if(num > max3){
                max3 = num;
            }else if(num == max3){
                continue;
            }
        }
        
        // if less than three max values
        if(max3 == LONG_MIN)
        {
            return max(max1,max2);  
        }
        
        return max3;
    }
};