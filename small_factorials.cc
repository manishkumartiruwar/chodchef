/*
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
*/

#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		cpp_int fact = 1;
		for(int i=n;i>0;i--){
	        fact=fact*i;
	    }
	    cout << fact << endl;
	}
return 0;
}
