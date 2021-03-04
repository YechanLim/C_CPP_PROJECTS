#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long result = 0;
        bool isNegative = false;
        
        try
        {
        if (x < 0)
        {
            x = abs(x);
            isNegative = true;
        }

        for (int i = 9, j = 0; i >= 0; i--)
        {
            int digit = (int)(x / pow(10, i));
            if (digit == 0 && j == 0)
            {
                continue;
            }
            

                if( (result += digit * pow(10, j++)) > 2147483647)
                {
                    return 0;
                }
                x -= digit * pow(10,i);
            }

        }
        catch (exception e)
        {
                result = 0;
        }

        if (isNegative)
        {
            return 0 - result;
        }
        return result;
    }
};