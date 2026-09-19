#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    /* Function to count number
    of odd digits in N */
    int countOddDigit(int n) {
        /* Counter to store the 
        number of odd digits */
        int oddDigits = 0;

        // Iterate till there are digits left
        while (n > 0) {
            // Extract last digit
            int lastDigit = n % 10;
            
            // Check if digit is odd
            if (lastDigit % 2 != 0) {
                // Increment counter
                oddDigits = oddDigits + 1;
            }
            n = n / 10;
        }

        return oddDigits;
    }
};

int main() {
    int n = 6678;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get count of odd digits in n
    int ans = sol.countOddDigit(n);
    cout << "The count of odd digits in the given number is: " << ans;
    
    return 0;
}