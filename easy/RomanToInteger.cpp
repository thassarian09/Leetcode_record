#include<iostream>
#include<map>
#include<string>

//my solution submitted to leetcode
class Solution {
public:
    int romanToInt(string s) {
        int counter = 0;
        string temp = "Z";
        for (int i=0; i<s.size();i++)
        {
            switch (s[i])
            {
                case 'I':
                    temp = "I";
                    counter++;
                    break;
                case 'V':
                    if (temp == "I")
                    {
                        counter = counter + 3;//if there is a I before V, then should add 4 and minus 1(I has been added to the counter)
                    }
                    else
                    {
                        counter = counter + 5;
                    }
                    temp = "V";
                    break;
                case 'X':
                    if (temp == "I")
                    {
                        counter = counter + 8;
                    }
                    else
                    {
                        counter = counter + 10;
                    }
                    temp = "X";
                    break;
                case 'L':
                    if (temp == "X")
                    {
                        counter = counter + 30;
                    }
                    else
                    {
                        counter = counter + 50;
                    }
                    break;
                    temp = "L";
                case 'C':
                    if (temp == "X")
                    {
                        counter = counter + 80;
                    }
                    else
                    {
                        counter = counter + 100;
                    }
                    temp = "C";
                    break;
                case 'D':
                    if (temp == "C")
                    {
                        counter = counter + 300;
                    }
                    else
                    {
                        counter = counter + 500;
                    }
                    temp = "D";
                    break;
                case 'M':
                    if (temp == "C")
                    {
                        counter = counter + 800;
                    }
                    else
                    {
                        counter = counter + 1000;
                    }
                    temp = "M";
                    break;
            }
        }
        return counter;
    }
};


//best solution from the Leetcode
class Solution {
public:
    int romanToInt(string S) {
        int ans = 0, num = 0;
        for (int i = S.size()-1; ~i; i--) {
            switch(S[i]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            if (4 * num < ans) ans -= num;
            else ans += num;
        }
        return ans;        
    }
};