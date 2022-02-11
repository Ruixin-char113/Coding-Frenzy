#include <iostream>
using namespace std;
int main() {
	int input;	int inputNumber = 0;
	while (cin >> inputNumber) {
		int front = 0;
		int *Abs = new int[inputNumber];
		bool endFlag = 0;
		for (int inputNumberV = 0; inputNumberV < inputNumber; inputNumberV++) {
			cin >> input;
			if (inputNumberV == 0 || endFlag == 1) {
				front = input;
				continue;
			}
			Abs[inputNumberV - 1] = abs(input - front);
			if (Abs[inputNumberV - 1]<1 || Abs[inputNumberV - 1]>inputNumber - 1) {
				cout << "Not jolly" << endl;
				endFlag = 1;
				continue;
			}
			if (endFlag)	continue;
			else
				for (int i = 0; i < inputNumberV - 1; i++) {
					if (Abs[i] == Abs[inputNumberV - 1]) {
						cout << "Not jolly" << endl;
						endFlag = 1;
						break;
					}
				}
			front = input;
		}
		if (!endFlag)	cout << "Jolly" << endl;
	}
}