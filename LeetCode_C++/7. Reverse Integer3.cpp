#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;
        long y = 0;

        while(x!=0){
        int pop = x%10;
        rev = rev*10 + pop;
        if( ((x>=0) && rev > INT_MAX) || ((x<0) && rev < INT_MIN))
        {
            return 0;
        }    
        x = x/10;
        }
        return rev;
    }  
};