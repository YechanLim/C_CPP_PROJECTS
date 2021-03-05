#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int sIndex = 0;
    cout << "sLength : " << s.length() << "  p : " << p << endl;
    for(int pIndex = 0 ; pIndex < p.length() ; pIndex++)
    {
        if(p[pIndex] == '?')
        {
                if(sIndex == s.length())
    {
        return false;
    }
            sIndex++;
            continue;
        }
        else if(p[pIndex] == '*')
        {
            if(pIndex == p.length() -1)
            {
                return true;
            }
            
            if(p[pIndex + 1] == '*')
            {
                continue;
            }

            while(sIndex <= s.length())
            {
                if(s[sIndex] == p[pIndex + 1] || p[pIndex + 1] == '?')
                {
                    if(isMatch(s.substr(sIndex),p.substr(pIndex + 1)))
                    {
                        return true;
                    }
                    cout << "1" << endl;
                }
                cout << "p : " << p << " 2" << endl;
                sIndex++;
            }
            return false;
        }
        else
        {
            if(sIndex == s.length() || s[sIndex] != p[pIndex])
            {
                cout << "false , index : " << sIndex << endl; 
                return false;
            }
            sIndex++;
        }
    } 

    if(sIndex == s.length())
    {
        return true;
    }
    return false;

    }
};