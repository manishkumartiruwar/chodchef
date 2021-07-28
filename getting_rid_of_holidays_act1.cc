/*

King Johnny of Byteland has in his short period of sovereignty established quite a few national holidays (close on thirty, in fact) in honour of... more or less anything he could think of. Each of these holidays occurs every a fixed number of days (possibly different for every holiday), and is accompanied by feasts, cabaret shows, and general merrymaking. Sometimes more than one holiday occurs on a single day, and once in a while all holidays take place on the same day. If this happens, the celebrations are combined and even more festive. After one such party, king Johnny started behaving strangely and had to be temporarily isolated from society.

For the period of king Johnny's absence (about 48 hours) you have been appointed Regent of Byteland. As a true patriot, you know that holidays are not good for the people, and would like to remove some before king Johnny returns (he won't mind, he never remembers anything after a party anyway). The people however, very sadly, don't know what is good for them, and will revolt if you remove more than k holidays. Try to choose the holidays you remove in such a way as to guarantee that the number of days which elapse between two consecutive holiday parties is as long as possible.

Solve the problem in at most 4kB of source code.

Input
The first line of input contains a single integer t<=200 - the number of test cases. t test case descriptions follow.

For each test case, the first line contains two space separated integers n k (1<=k < n<=30), denoting the total number of holidays and the number of holidays to be removed. The next line contains n space separated integers, the i-th being ti (1<=ti<=1018) - the number of days every which the i-th holiday occurs.

Output
For each test case, output one line containing an increasing sequence of exactly k integers - the numbers of the holidays to be removed (holidays are numbered in the input order from 1 to n).

Example
Input:
1
5 2
6 13 10 15 7

Output:
2 5
(The shortest period between two successive holiday parties is 2 days.)

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int integer_smaller_than_or_equal_to_200;
	int integer_n_greater_than_or_equal_to_1_and_greater_than_k_and_smaller_than_30;;
	int integer_k_greater_than_or_equal_to_1_and_smaller_than_n_and_smaller_than_30;
	int time_between_holidays;
	
	
	
	cin>>integer_smaller_than_or_equal_to_200
	>>integer_n_greater_than_or_equal_to_1_and_greater_than_k_and_smaller_than_30
	>>integer_k_greater_than_or_equal_to_1_and_smaller_than_n_and_smaller_than_30;
	
	
    int a[integer_n_greater_than_or_equal_to_1_and_greater_than_k_and_smaller_than_30];
	
	
    for (int i = 0; i < integer_n_greater_than_or_equal_to_1_and_greater_than_k_and_smaller_than_30; ++i)
{
    cin >> a[i];
}






    int b[integer_k_greater_than_or_equal_to_1_and_smaller_than_n_and_smaller_than_30];
    int smallest_counter =0 ;
    
    
    









	
	
	
	
	return 0;
}

