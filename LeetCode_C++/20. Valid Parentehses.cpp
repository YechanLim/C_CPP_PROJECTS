#include <bits/stdc++.h>
using namespace std;

class Solution
{
public: 
    int find(const char arr[], int len, char seek)
    {
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == seek)
                return i;
        }
        return -1;
    }

    bool isValid(string s)
    {
        const char openBrackets[3] = {'(', '{', '['};
        const char closeBrackets[3] = {')', '}', ']'};

        stack<int> openBracketIndexStack;
        int index;

        for (int i = 0; i < s.size(); i++)
        {
            if((index = find(openBrackets,3,s[i])) != -1)
            {
               openBracketIndexStack.push(index);
               continue; 
            }
            
            index  = find(closeBrackets,3,s[i]);
            if(openBracketIndexStack.empty())
            {
                return false;
            }

            if(index != openBracketIndexStack.top())
            {
                return false;
            }
            openBracketIndexStack.pop();
        }
        if(!openBracketIndexStack.empty())
        {
            return false;
        }
        
        return true;
    }
};