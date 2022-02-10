#include <iostream>
#include <string>
using namespace std;
int main() {
	int inputNumber;
	int maxNumber = 0;
	char outputChar[26] = { ' ' };
	int  outputInt[26] = { 0 };
	string del;
	cin >> inputNumber;	getline(cin,del);

	while (inputNumber) {
		string inputString;

		for (int i = 0; i < 26; i++)
			outputChar[i] = 'A' + i;
																	//input
		getline(cin, inputString);
		for (int i = 0; i < inputString.length(); i++) {
			if (97 <= inputString[i] && inputString[i] <= 122) {
				inputString[i] -= 32;
			}
			if (65 <= inputString[i] && inputString[i] <= 90) {
				outputInt[inputString[i] - 65]++;
				if (outputInt[inputString[i] - 65] > maxNumber)
					maxNumber = outputInt[inputString[i] - 65];
			}
		}
		inputNumber--;
	}
																	//output
	while (maxNumber){
		for (int i = 0; i < 26; i++) {
			if (outputInt[i] == maxNumber)
				cout << outputChar[i] << ' ' << outputInt[i] << endl;
		}
		maxNumber--;
	}
}