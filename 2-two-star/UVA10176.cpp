#include <iostream>
using namespace std;

int main(){
	string input;
	while(cin >> input){
		int d = 0;
		for(int i=0; i<input.length()-1; i++){
			d *= 2;
			d += input[i] - '0';
			d %= 131071;
		}
		if(d)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}