Qusetion 1:
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****

*****

*****

*****

*****


Approach: 
1.Use a for loop to iterate from 0 to (N-1), where N is the number of rows. This loop will ensure to print each row of the pattern.
2.Inner loops makes sure that N stars are printed in every line, eventually since the inner loop will run for N times, it will make sure that N stars are printed in N lines, resulting in a square of size N x N, which is the desired pattern
3. Now, print the asterisks for each column of a row, inside the inner loop.
Move to a new line after printing each row to maintain the square structure of the pattern.

Complexity Analysis: 
Time Complexity:O(N2) As two for loops are being used to print the patterns and both of them runs for N time.

Space Complexity: As no additional space is used, so the Space Complexity is O(1)