#include<iostream>
#include<map>
#include<string>
 
using namespace std;

//Submission one:
class Solution {

public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int temp = 0;
        for (int i=0; i<nums.size();i++)
        {
            temp += nums[i];
            result.push_back(temp);
        }
        return result;
    
    }
};

//Submission two: less memory usage, less variables used, more time time(same time complexity)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i = 1;
        while (i<nums.size()){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
};