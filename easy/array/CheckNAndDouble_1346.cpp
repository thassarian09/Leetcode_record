class Solution {//O(n^2)
public:
    bool checkIfExist(vector<int>& arr) {
        bool flag = false; 
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if((arr[i]==arr[j]*2 ||arr[i]*2==arr[j])&&arr[i]!=0 && arr[j]!=0)
                {
                    flag = true;
                }
                else if(arr[i]==0 && arr[j]==0 &&i!=j)
                {
                    flag = true;
                }
            }
        }
        return flag;
    }
};

// O(n)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(int i=0;i<arr.size();i++){
            if(set.count(2*arr[i])>0 || ((arr[i]%2==0) && set.count(arr[i]/2)>0))
                return true;
            set.insert(arr[i]);
        }
        return false;
    }
};