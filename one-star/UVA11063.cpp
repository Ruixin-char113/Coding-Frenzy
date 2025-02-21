#include <iostream>
using namespace std;

int main(){
	int caseN = 0;
	
	int N = 0;
	while(cin >> N){
		bool B2seq = true;
		caseN++;
		
		// Store
		int data[N] = { 0 };
		for(int i = 0; i < N; i++){
			cin >> data[i];
			if((i > 0 && data[i - 1] > data[i]) || data[i] < 1){
				B2seq = false;
			}
		}
		
		// Judge
		bool addArray[20001] = { false };
		for(int i = 0; i < N - 1; i++){
			for(int j = i; j < N; j++){
				int add = data[i] + data[j];
				if(!addArray[add])
					addArray[add] = true;
				else
					B2seq = false;
			}
		}
		
		// Output
		cout << "Case #" << caseN << ": It is ";
		if(!B2seq){
			cout << "not ";
		}
		cout << "a B2-Sequence." << endl << endl;
	}
}