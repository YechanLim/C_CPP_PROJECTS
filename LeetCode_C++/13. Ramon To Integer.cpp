#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ChangeRomanToInt(char r)
    {
        switch (r)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(string s)
    {
        int index = 0;
        int result = 0;
        int lastAddedNum = 1001;
        while (s.length() != index)
        {
            int romanNum = ChangeRomanToInt(s[index]);
            if (lastAddedNum < romanNum)
            {
                result -= lastAddedNum * 2;
            }
            result += romanNum;
            lastAddedNum = romanNum;
            index++;
        }
        return result;
    }
};
