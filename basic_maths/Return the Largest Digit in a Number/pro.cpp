#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    /* Function to find the largest
    digit in a given number*/
    int largestDigit(int n) {
        // Variable to store the largest digit
        int largestDigit = 0;

        /* Keep on iterating while there
        are digits left to extract */
        while(n > 0) {
            int lastDigit = n % 10;

            /* If the current digit is greater than 
            largest digit, update largest digit */
            if(lastDigit > largestDigit) {
                largestDigit = lastDigit;
            }
            
            n = n / 10;
        }
        
        // Return the largest digit 
        return largestDigit;
    }
};

int main()
{
    int n = 348;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to find the largest digit in n
    int ans = sol.largestDigit(n);
    
    cout << "The largest digit in the number is: " << ans;
    
    return 0;
}
