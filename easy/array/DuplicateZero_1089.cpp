class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int num_zero = 0;
        int j = arr.size()-1;
        int flag = 0;
        for (int i = 0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                num_zero++;
            }
            if (i + num_zero == arr.size()-1)
            {
                break;
            }
            else if (i + num_zero > arr.size()-1)
            {
                arr[arr.size()-1] = 0;
                flag = 1;
                break;
            }
        }
        j = j- flag;
        for(int i = arr.size()-1-num_zero;i>=0;i--)
        {
            if(arr[i] != 0)
            {
                arr[j] = arr[i];
            }
            else
            {
                arr[j] = 0;
                arr[j-1] = 0;
                j--;
            }
            j--;
        }
    }
};