#include <iostream>
using namespace std;

int main(){
	int input;
	
	long long fib[51]; fib[0] = fib[1] = 1;
	for(int i=2; i<=50; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	while(cin >> input && input){
		cout << fib[input] << endl;
	}
}