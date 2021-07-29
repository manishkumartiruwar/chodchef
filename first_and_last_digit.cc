/*
if Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
*/

#include <iostream>
using namespace std;

int main() {
int positive_integer_total_number_of_occurences;
int positive_integer_nth_number;
cin >> positive_integer_total_number_of_occurences;
int positive_integer_last_ones_place=0;
int positive_integer_first_ones_place=0;
int positive_integer_last_ones_place_plus_first_ones_place =0;


for(int i=0;i<positive_integer_total_number_of_occurences;i++)
	{
	    cin>> positive_integer_nth_number;
	   positive_integer_last_ones_place=positive_integer_nth_number%10;
	    for(int j=0;positive_integer_nth_number>=10;j++)
	    {
	        positive_integer_nth_number=positive_integer_nth_number/10;
	    }
	     positive_integer_first_ones_place=positive_integer_nth_number;
	    positive_integer_last_ones_place_plus_first_ones_place=positive_integer_first_ones_place+positive_integer_last_ones_place;
	    cout<<positive_integer_last_ones_place_plus_first_ones_place<<endl;
	}

return 0;
}
