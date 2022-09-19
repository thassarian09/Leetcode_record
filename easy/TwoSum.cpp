#include <iostream>

using namespace std;

class Solution_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i<nums.size();i++){
            for(int j = i+1; j<nums.size();j++)
            {
                if (nums[i]+nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    
                }
            }
        } 
        return result;
    }
}; //time complexity O(n^2)

class Solution_2 {
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())// if the number is in the map
            {
                v.push_back(m[target-nums[i]]);//push the index of the number
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;//stored the elements in the map, m[] is the key, i is the value
        }
       return v;
    }
}; //time complexity O(n)
