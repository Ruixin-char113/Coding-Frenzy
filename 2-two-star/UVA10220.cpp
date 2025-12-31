#include <iostream>
#include <array>
using namespace std;
int main(){
	array<int, 1001> table = {0};
	array<int, 3000> largeNumber = {0};
	largeNumber[0] = 1;
	table[0] = 1;
	
	for(int i =1; i <= 1000; i++){
		// Product
		for(int j=0; j<3000; j++){
			largeNumber[j] *= i;
		}
		// Carry
		for(int j=0; j<3000; j++){
			largeNumber[j+1] += largeNumber[j] / 10;
			largeNumber[j] %= 10;
		}
		// Count
		for(int j=0; j<3000; j++){
			table[i] += largeNumber[j];
		}
	}
	
	int input;
	while(cin >> input){
		cout << table[input] << endl;
	}
}