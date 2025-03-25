#include <iostream>
#include <cmath>
using namespace std;

int main(){
	bool preNS = false;	// Number sign
	int digit = 0;
	int store = 0;
	int mask = pow(2, 8) - 1;
	char c;
	while(cin >> c){
		// Check number sign
		if(c == '#' && !preNS){
			cout << "#";
			preNS = true;
		}
		else if(c == '#' && preNS)
			break;
		else
			preNS = false;
		
		// Read and store Base64 value
		digit++;
		store <<= 6;
		if('A' <= c && c <= 'Z'){
			store += c - 'A';
		}
		else if('a' <= c && c <= 'z'){
			store += c - 'a' + 26;
		}
		else if('0' <= c && c <= '9'){
			store += c - '0' + 52;
		}
		else if(c == '+'){
			store += 62;
		}
		else if(c == '/'){
			store += 63;
		}
		else if(c == '='){
			
		}
		else{
			digit--;
			store >>= 6;
		}
		
		// Decode and Output
		if(digit == 4){
			for(int i = 2; i >= 0 ; i--){
				char out = char(store >> (i * 8) & mask);
				if(!(out == char(0)))
					cout << out;
			}
			digit = 0;
		}
	}
}
