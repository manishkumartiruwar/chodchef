/*
You are given an array A consisting of N integers. You have to answer Q queries of the following two types:

1 L R (R>L) which asks you to find gcd(AL,lcm(AL+1,gcd(AL+2,...,((R−L)mod2==1? gcd(AR−1,AR):lcm(AR−1,AR))…))).

2 L R (R>L) which asks you to find the same as above but lcm swapped with gcd and vice-versa.

Here lcm(a,b) and gcd(a,b) denotes the least common multiple and greatest common divisor of two integers a and b respectively.

Example: Consider the array A = [2,4,8,16,32,64].

Suppose a query is of the form 1 1 6, so it asks you to find: gcd(2,lcm(4,gcd(8,lcm(16,gcd(32,64))))).

Suppose a query is of the form 2 1 5, so it asks you to find: lcm(2,gcd(4,lcm(8,gcd(16,32)))).

Note: Since input-output is large, prefer using fast input-output methods.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each testcase contains Q+2 lines of input.
The first line of each test case contains two space-separated integers, N and Q.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Q lines follow. For each valid i, the ith of these lines contains three space-separated integers Typei,Li,Ri, the type and parameters of the ith query.
Output Format
For each query, output in a single line answer to the problem.

Constraints
1≤T≤3
2≤N≤2⋅105
1≤Q≤2⋅105
1≤Ai≤109
1≤Typei≤2
1≤Li<Ri≤N
The sum of N over all test cases does not exceed 2⋅105.
The sum of Q over all test cases does not exceed 2⋅105.
Subtasks
Subtask #1 (10 points):

2≤N≤630
The sum of N over all test cases does not exceed 630.
Time limit: 1 sec
Subtask #2 (90 points):

Original constraints
Time limit: 1.5 sec
Sample Input 1 
1
6 3
2 4 8 16 32 64
1 1 6
2 1 5
1 5 6
Sample Output 1 
2
4
32
Explanation
Test case 1: The answer for the first query is 
=gcd(2,lcm(4,gcd(8,lcm(16,gcd(32,64))))) 
= gcd(2,lcm(4,gcd(8,lcm(16,32)))) 
= gcd(2,lcm(4,gcd(8,32))) 
= gcd(2,lcm(4,8)) 
= gcd(2,8) 
= 2.

The answer for the second query is 
=lcm(2,gcd(4,lcm(8,gcd(16,32))))  
= lcm(2,gcd(4,lcm(8,16))) 
= lcm(2,gcd(4,16)) 
= lcm(2,4) 
= 4.
