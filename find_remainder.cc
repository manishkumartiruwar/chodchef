/*
Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3 
1 2
100 200
40 15

Output
1
100
10
*/
#include <bits/stdc++.h> 

using namespace std;

int main() {
int  positive_integer_total_number_of_occurences;
cin>>positive_integer_total_number_of_occurences;

while(positive_integer_total_number_of_occurences > 0){
    
int positive_integer_dividend;
int positive_integer_divisor;
cin>> positive_integer_dividend>> positive_integer_divisor;


int positive_integer_quotient;
positive_integer_quotient = positive_integer_dividend % positive_integer_divisor;

positive_integer_total_number_of_occurences --;  

printf("%d\n", positive_integer_quotient);
}

	return 0;
}
