class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool flag = false;
        int changes = 0;
        if(arr.size()<3)
        {
            return false;
        }
        for (int i=1;i<arr.size();i++)
        {
            if (arr[i]>arr[i-1]&&changes == 0)
            {
                changes = 1;
            }
            else if (arr[i]>arr[i-1]&&changes == 1)
            {
                //do nothing
            }
            else if(arr[i]<arr[i-1]&&changes == 1)
            {
                changes = 2;
            }
            else if (arr[i]<arr[i-1]&&changes == 2)
            {
                //do nothing
            }
            else
            {
                return false;
            }
        }
        if (changes == 1)
        {
            return false;
        }
        return true;
    }
};