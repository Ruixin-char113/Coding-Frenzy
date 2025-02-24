#include <iostream>
#define inputMax 100000000
#define fibMax   41
using namespace std;

int main(){
	// Check max of fib array
	/*
	long long a, b, c;
	a = 0;
	b = 1;
	int count = 1;
	while(1){
		c = a + b;
		a = b;
		b = c;
		count++;
		if(c > inputMax){
			cout << count << ' ' << c << endl;
			break;
		}
	}
	*/

	// Create fib array
	long long fibArray[fibMax] = { 0 };
	fibArray[0] = 0;
	fibArray[1] = 1;
	for(long long i = 2; i < fibMax; i++){
		fibArray[i] = fibArray[i - 2] + fibArray[i - 1];
	}
	
	// Input & handle
	int dataNumber = 0;
	cin >> dataNumber;
	while(dataNumber--){
		// Input
		long long data = 0;
		cin >> data;
		
		// Find index
		int index = 0;
		for(int i = 2; i < fibMax; i++){
			if(data < fibArray[i]){
				index = i;
				break;
			}
		}
		
		// Output fib number
		cout << data << " = ";
		for(int i = index - 1; i >= 2; i--){
			if(data >= fibArray[i]){
				data -= fibArray[i];
				cout << '1';
			}else{
				cout << '0';
			}
		}
		
		// Output (fib)
		cout << " (fib)" << endl;
	}
}