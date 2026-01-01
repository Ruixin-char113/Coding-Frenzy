#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string fib[5001];
	fib[0] = "0"; fib[1] = "1";
	for(int i =2;i<5001;i++){
		// fib[i] = fib[i-1] + fib[i-2];
		string l = fib[i-1];
		string s = fib[i-2];
		
		int carry = 0;
		for(int j=0;j<l.length();j++){
			int temp = l[j] - '0' + carry;
			if(j<s.length())
				temp += s[j] - '0';
			fib[i] += temp % 10 + '0';
			carry = temp / 10;
		}
		if(carry)
			fib[i] += carry + '0';
	}
	
	// Reverse
	for(int i=2;i<5001;i++){
		reverse(fib[i].begin(), fib[i].end());
	}
	
	// Output
	int input;
	while(cin >> input){
		cout << "The Fibonacci number for "
			<< input << " is "
			<< fib[input]
			<< endl;
	}
}