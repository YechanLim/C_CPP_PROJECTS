#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestLength = 0;
        string substring;
        for(int i = 0 ; i<s.length() ; i++)
        {
            char lastChar = s[i];
            size_t index = substring.find(lastChar);
            if(index == string::npos)
            {
                substring += lastChar;
                if(longestLength < substring.length())
                {
                    longestLength = substring.length();
                }
            }
            else
            {            
                substring += lastChar;
                cout << "index : " << index << endl;
                substring.erase(0,index + 1);
            }
        cout << substring << endl;
        }
        return longestLength;
    }
};