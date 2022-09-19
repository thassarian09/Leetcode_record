#include<iostream>
#include<map>
#include<string>
 
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int sum_temp;
        for (int i=0; i<accounts.size();i++)
        {
            sum_temp = 0;
            for (int j=0;j<accounts[i].size();j++)
            {
                sum_temp+= accounts[i][j];
            }
            if (sum_temp>max)
            {
                max = sum_temp;
            }
        }
        return max;
    }
};