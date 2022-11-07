# CS252_ASSIGNMENT
***
***QUESTION 1:***
<br/>
<a href="https://github.com/vivek0153/CS252_ASSIGNMENT/tree/main/Q-4.22">Question 1: Chapter 4- 4.22</a>
<br />Write a multithreaded program that calculates various statistical values
for a list of numbers. This program will be passed a series of numbers
on the command line and will then create three separate worker threads.
One thread will determine the average of the numbers, the second will
determine the maximum value, and the third will determine the minimum value. For example, suppose your program is passed the integers
90 81 78 95 79 72 85
<br />The program will report
<br />The average value is 82
<br />The minimum value is 72
<br />The maximum value is 95
<br />The variables representing the average, minimum, and maximum values
will be stored globally. The worker threads will set these values, and
the parent thread will output the values once the workers have exited.

***
***QUESTION 2***
<br/>
<a href="https://github.com/vivek0153/CS252_ASSIGNMENT/tree/main/Q-3.21">Question 2: Chapter 3- 3.21</a>
The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm:
<br/>
n =
<br/>
{ n ∕ 2, if n is even
<br/>
{3 × n + 1, if n is odd
<br/>The conjecture states that when this algorithm is continually applied,
all positive integers will eventually reach 1. For example, if n = 35, the
sequence is
35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
<br/>Write a C program using the fork() system call that generates this
sequence in the child process. The starting number will be provided
from the command line. For example, if 8 is passed as a parameter on
the command line, the child process will output 8, 4, 2, 1. Because the
parent and child processes have their own copies of the data, it will be
necessary for the child to output the sequence. Have the parent invoke
the wait() call to wait for the child process to complete before exiting
the program. Perform necessary error checking to ensure that a positive
integer is passed on the command line

