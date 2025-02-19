#include <iostream>
using namespace std;

int main(){
	int T = 0, countT = 0;
	cin >> T;
	while(T--){
		bool symmetric = true;
		countT++;
		
		int n = 0;

		char rmNchar;
		cin >> rmNchar >> rmNchar >> n;
		
		// Store array
		n *= n;
		long long data[n] = { 0 };
		for(int i = 0; i < n; i++){
			cin >> data[i];
		}

		// Check array
		for(int i = 0; i <= (n - 1) / 2; i++){
			if(data[i] != data[n - 1 - i] || data[i] < 0 || data[n - 1 - i] < 0){
				symmetric = false;
				break;
			}
		}

		// Output
		cout << "Test #" << countT << ": ";
		if(symmetric){
			cout << "Symmetric.";
		}
		else{
			cout << "Non-symmetric.";
		}

		cout << endl;

	}
}