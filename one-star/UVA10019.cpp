#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* Check 2 ^ n >= 9999 
	// 2 ^ 14 > 9999
	// 2 ^ 16 > 9999(Hex)
	int max = pow(16, 4);
	int i = 1;
	int countI = 0;
	while(1){
		i *= 2;
		countI++;
		if(i >= max){
			cout << countI << endl;
			break;
		}
	}
	*/
	
	// Create 2 ^ 0 ~ 2 ^ 16 array
	int binaryArray[17] = { 0 };
	for(int i = 0; i < 17; i++){
		binaryArray[i] = pow(2, i);
	}
	
	int dataNumber = 0;
	cin >> dataNumber;
	while(dataNumber--){
		// Input data
		int dataDec = 0;
		int dataHex = 0;
		cin >> dataDec;
		
		// Change Dec to Hex
		int digit = 0;
		int tempDec = dataDec;
		while(tempDec / 1){
			dataHex += (tempDec % 10) * pow(16, digit);
			tempDec /= 10;
			digit++;
		}

		// Count b1, b2
		int b1 = 0, b2 = 0;
		for(int i = 16; i >= 0; i--){
			if(dataDec == 0 && dataHex == 0)
				break;
			if(dataDec >= binaryArray[i]){
				b1++;
				dataDec -= binaryArray[i];
			}
			if(dataHex >= binaryArray[i]){
				b2++;
				dataHex -= binaryArray[i];
			}
		}
		
		// Output
		cout << b1 << ' ' << b2 << endl;
	}
	
}