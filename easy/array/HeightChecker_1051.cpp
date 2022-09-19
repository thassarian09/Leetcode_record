class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counter = 0;
        vector<int> counter_height (101);
        for(int i=0;i<heights.size();i++)
        {
            counter_height[heights[i]]++;
        }
        int i = 1, j = 0;//Two pointers, i is the pointer of counter_height, j is the pointer of heights
        while(i<101)
        {
            if (counter_height[i]==0)//if there is no number i in heights, then we can skip it
            {
                i++;
            }
            else
            {
                if(i!= heights[j])//not in the right position
                {
                    counter++;
                }
                j++;//pointer move to the next number in heights
                counter_height[i]--;//reduce the number of number i in counter_height, until it is 0
            }
        }
        return counter;
    }
};

int max 
