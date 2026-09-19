#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    /* Function to check if a 
    number is palindrome or not*/
    bool isPalindrome(int n) {
        // Create a copy of original number
        int copy = n;
        
        /* After the code, revNum will
        contain the reversed number */
        int revNum = 0;

        /* Keep on iterating while there
        are digits left to extract */
        while(n > 0) {
            int lastDigit = n % 10;

            /* Pushing last digit at the
            back of reversed number */
            revNum = (revNum * 10) + lastDigit;
            n = n / 10;
        }
        
        /* Return true if the reversed and 
        copy of original number is same */
        if(revNum == copy) return true;
        return false;
    }
};

int main()
{
    int n = 12321;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    
    // Function call to check if n is a palindrome
    bool ans = sol.isPalindrome(n);
    
    if(ans) cout << "The given number is a palindrome";
    else cout << "The given number is not a palindrome";
    
    return 0;
}