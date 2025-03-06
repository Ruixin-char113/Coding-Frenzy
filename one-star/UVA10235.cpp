#include <iostream>
#include <cmath>
using namespace std;

// Reverse Number
int reverseNumber(int input){
	int reverseNumber = 0;
	int n = 0;
	while(input % 10 || input / 10){
		reverseNumber *= 10;
		reverseNumber += (input % 10);
		input /= 10;
		n++;
	}
	return reverseNumber;
}

// Check Prime
bool checkPrime(int input){
	bool prime = true;
	for(int i = 2; i <= sqrt(input); i++){
		if(!(input % i)){
			prime = false;
			break;
		}
	}
	return prime;
}

int main(){
	int input;
	while(cin >> input){
		cout << input;
		if(checkPrime(input)){
			if(checkPrime(reverseNumber(input)) && input != reverseNumber(input)){
				cout << " is emirp.";
			}
			else{
				cout << " is prime.";
			}
		}
		else{
			cout << " is not prime.";
		}
		cout << endl;
	}
}