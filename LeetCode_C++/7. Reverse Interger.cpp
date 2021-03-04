#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {   
    string str1 = to_string(x);
    string str2;
    int str1_index = str1.size() - 1; 
    int str2_index = 0;
    bool isNegative = false;

    if(x<0)
    {
        isNegative = true;
        x = abs(x);
    }

    while(str1_index >=0  && str1[str1_index] == '0' )
    {
        str2[str2_index] = '0';
        str1_index--;
    }

    while(str1_index >= 0)
    {
        str2[str2_index++] = str1[str1_index--];
    }
        
    int result ;
    try
    {
        result = stoi(str2);
    }
    catch(out_of_range e)
    {
        result = 0;
    }

    if(isNegative){
        return 0 - result;
    }
    return result;
    }
};