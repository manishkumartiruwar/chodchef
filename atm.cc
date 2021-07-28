/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept 
the transaction if X is a multiple of 5, and Pooja's account balance 
has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.

Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

Output
Output the account balance after the attempted transaction, 
given as a number with two digits of precision. 
If there is not enough money in the account to complete the transaction, 
output the current bank balance.

Example - Successful Transaction
Input:
30 120.00

Output:
89.50
Example - Incorrect Withdrawal Amount (not multiple of 5)
Input:
42 120.00

Output:
120.00
Example - Insufficient Funds
Input:
300 120.00

Output:
120.00

*/
#include <iostream>
using namespace std;

int main() {
int  positive_integer ;
float non_negative_integer ;


cin>>positive_integer>>non_negative_integer ;

if(positive_integer<non_negative_integer  && positive_integer % 5 == 0 )
{
    non_negative_integer = non_negative_integer- positive_integer - .50;
    
}

cout<<non_negative_integer;

	return 0;
}

