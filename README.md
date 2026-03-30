# inet3101-assignment2
Source code for module 1 assignment 2
Problem Statement:
The goal of this assignment is to build on the to_binary() function and make it more flexible. Instead of converting the numbers to binary, the new written code is able to convert to a base-10 number to any 2-16 base number. If the user enters a number that is not within this range, an error message will be displayed. The correct octal and hexadecimal values should also be shown by using the proper prefixed.

Solution:
The recursive function called to_base_n() works since it's dividing the number by the chosen base and printing the reminder every time. Whenever the remainder is less than 10 it's shown as a regular digit, however when the remainder is more than 10 it's printed as a lowercase hexadecmial letter from A - F.

Pros and Cons:
One pro is that the recursive fuction is shorter and a lot easier to read compared to a loop-based function. One con is the risk of stack overflow. Since each recursive call adds a new fram to it's stack a stack overflow could be triggered because the computer might run out of memory allocated for these nested calls. 
