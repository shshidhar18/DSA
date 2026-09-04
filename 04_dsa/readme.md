Question :
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



1

22

333

4444

55555



Approach: 
Use a for loop to iterate from 1 to N, where N is the number of rows. This loop will ensure to print each row of the pattern.
Inside this loop, run another loop from 1 to current value of the outer loop variable. It will make the number of rows and columns equal(1 column in 1st row, 2 columns in 2nd row etc).
Now, print the current value of outer loop variable, as the row number needs to be printed in each column of the current row.
Move to a new line after printing each row to maintain the right-angled triangle shape of the pattern.

Complexity Analysis: 
Time Complexity : O(N2). As the outer loop runs for N time and the inner loop runs incrementally in each iteration(1+2+3+...+N), which is equal to (N*(N+1)/2). So, overall it is O(N2).

Space Complexity :O(1). As no extra space is being used to print the patterns.