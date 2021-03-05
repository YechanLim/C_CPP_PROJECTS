#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int sIndex = 0;
        for (int pIndex = 0; pIndex < p.length(); pIndex++)
        {
            if (p[pIndex] == '?')
            {
                if (sIndex == s.length())
                {
                    return false;
                }

                sIndex++;
            }
            else if (p[pIndex] == '*')
            {
                if (pIndex == p.length() - 1)
                {
                    return true;
                }

                if (p[pIndex + 1] == '*')
                {
                    continue;
                }

                pIndex++;
                string commonSubstr;
                while(pIndex < p.length() && p[pIndex] != '?' && p[pIndex] != '*' )
                {
                    commonSubstr += p[pIndex];
                    pIndex++;
                }

                while (sIndex <= s.length())
                {
                    size_t commonSubstrIndex = s.substr(sIndex).find(commonSubstr);
                    if(commonSubstrIndex == string::npos)
                    {
                        break;
                    }

                     if (isMatch(s.substr(commonSubstrIndex), p.substr(pIndex + 1)))
                        {
                            return true;
                        }
                    sIndex = commonSubstrIndex + 1;
                }
                return false;
            }
            else
            {
                if (sIndex == s.length() || s[sIndex] != p[pIndex])
                {
                    return false;
                }
                sIndex++;
            }
        }

        if (sIndex == s.length())
        {
            return true;
        }
        return false;
    }
};