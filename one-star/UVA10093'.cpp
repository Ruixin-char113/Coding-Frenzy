#include <iostream>
using namespace std;

int main(){
	// 0 = 48, A = 65, a = 97
	// a * N ^ 2 + b * N + c =
	// (N-1)(aN + a + b) + a + b + c
	//					   ---------
	// (a + b + c) % (N - 1) = 0
	string data;
	while(cin >> data){
		// Count: addNumber, baseNumber
		int tempNumber = 0;
		int baseNumber = 2;
		int addNumber = 0;
		for(int i = 0; i < data.length(); i++){
			// Number
			if('0' <= data[i] && data[i] <= '9'){
				tempNumber = data[i] - '0';
			}
			// Uppercase
			else if('A' <= data[i] && data[i] <= 'Z'){
				tempNumber = data[i] - 'A' + 10;
			}
			// Lowercase
			else if('a' <= data[i] && data[i] <= 'z'){
				tempNumber = data[i] - 'a' + 36;
			}
			// -, +
			else{
				continue;
			}
			
			addNumber += tempNumber;
			
			if(baseNumber <= tempNumber){
				baseNumber = tempNumber + 1;
			}
		}
		
		// Output
		bool possible = false;
		for(int i = baseNumber - 1; i <= 62; i++){
			if(!(addNumber % i)){
				possible = true;
				cout << i + 1 << endl;
				break;
			}
		}
		if(!possible){
			cout << "such number is impossible!" << endl;
		}
	}
}
