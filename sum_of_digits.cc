/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8
*/
#include <iostream>
using namespace std;

int main() {

int positive_integer_total_number_of_occurrences;
cin>>positive_integer_total_number_of_occurrences;
while (positive_integer_total_number_of_occurrences > 0){
   int positive_integer_nth_number;
   cin>> positive_integer_nth_number;
   int positive_integer_nth_number_sum;
   
while(positive_integer_nth_number != 0){
    positive_integer_nth_number_sum = positive_integer_nth_number_sum + positive_integer_nth_number%10;
    positive_integer_nth_number=positive_integer_nth_number/10;
}   
    
   printf("%d\n",positive_integer_nth_number_sum);
   positive_integer_total_number_of_occurrences --;
}
	return 0;
}

