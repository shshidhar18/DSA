#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to count the 
    number of odd digits in N */
    int countDigit(int n) {
        // Edge case
        if(n == 0) return 1;
        
        int count = log10(n) + 1;
        return count;
    }
};

int main()
{
    int n = 6678;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get count of digits in n
    int ans = sol.countDigit(n);
    cout << "The count of digits in the given number is: " << ans;
    
    return 0;
}