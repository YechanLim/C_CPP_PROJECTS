#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonPrefix;
        char commonCharacter;
        int index = 0;
        bool isEnd = false;
        
        if(strs.size() == 0)
        {
            return commonPrefix;
        }
        
        while(index < strs[0].length())
        {
            commonCharacter = strs[0][index];
            for(int i = 0 ; i < strs.size() ; i++)
            {
                if(index > strs[i].length()-1 || commonCharacter != strs[i][index])
                {
                    isEnd = true;
                    return commonPrefix;
                }
            }        
            commonPrefix += commonCharacter;
            index++;
         }
         return commonPrefix;
    }
};