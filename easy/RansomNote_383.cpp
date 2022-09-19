class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        bool flag = true;
        for (int i = 0; i<magazine.length();i++)
        {
            arr[magazine.at(i)-'a']++;//For the target character, the number of times it appears in the magazine is increased by 1.
        }
        for(int i = 0; i<ransomNote.length();i++)
        {
            if(--arr[ransomNote.at(i)-'a']<0)//Decrease by 1 and test if the number is less than 0.
            {
                flag = false;
            }
            
        }
        return flag;
    }
};