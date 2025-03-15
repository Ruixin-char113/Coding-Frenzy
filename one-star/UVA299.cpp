#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		// Input
		int L;
		cin >> L;
		if(!L){
			cout << "?" << endl;
			continue;
		}
		
		int train[50];
		for(int i = 0; i < L; i++){
			cin >> train[i];
		}
		
		// Sort
		bool isFinished = false;
		int S = 0;
		while(1){
			if(isFinished)
				break;
			
			for(int i = 0; i < L - 1; i++){
				if(train[i] > train[i+1]){
					swap(train[i], train[i+1]);
					S++;
					break;
				}
				if(i == L - 2)
					isFinished = true;
			}
		}
		
		// Output
		cout << "Optimal train swapping takes " << S << " swaps." << endl;
	}
}