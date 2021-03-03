#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string stringX = to_string(x);
        string reversedX;
        int j = 0;

        for(int i = stringX.length() - 1 ; i>= 0 ; i--)
        {
                reversedX += stringX[i];
        }
        cout << stringX << endl;
        cout << reversedX;
        
        if(stringX.compare(reversedX)==0)
            return true;
        
        return false;
    }
};